#include <stdio.h>

int lostway(int step); // Prototype of the lostway function

int main() {
    int x, y, arr[100], counter = 1, step = 1;
    printf("Enter two numbers (separated by a space):\n");
    scanf("%d %d", &x, &y); // Reading two integers from the keyboard
    arr[0] = x + step; // The first element of array arr

    // A loop to generate a sequence of steps
    for (int i = x + 1; i < y;) {
        if (lostway(step + 1) <= y - i) { // Checking the condition for increasing the step
            step++;
            i += step;
            arr[counter] = i; // Saving the step to the arr array
            counter++;
        } else if (lostway(step) <= y - i) { // Checking the condition for increasing the step without changing
            i += step;
            arr[counter] = i; // Saving the step to the arr array
            counter++;
        } else if (lostway(step - 1) <= y - i) { // Checking the condition for decreasing the step
            step--;
            i += step;
            arr[counter] = i; // Saving the step to the arr array
            counter++;
        }
    }

    printf("The steps look like this:\n %d,", x);
    for (int i = 0; i < counter; i++) {
        printf("%d,", arr[i]); // Print the sequence of steps
    }

    printf("\nTheir number is: %d", counter); // Print the number of steps
    return 0;
}

int lostway(int step) {
    int result = 0;
    for (int i = step; i > 0; i--) {
        result += i; // Calculating the sum of numbers from step to 1
    }
    return result; // Returning the result
}
