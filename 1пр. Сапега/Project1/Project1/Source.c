#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {
    int t1, t2, t3;
    float total_time;

    SetConsoleOutputCP(1251);

    printf("Enter the time for the first guest (t1): ");
    scanf("%d", &t1);

    printf("Enter the time for the second guest (t2): ");
    scanf("%d", &t2);

    printf("Enter the time for the third guest (t3): ");
    scanf("%d", &t3);

    total_time = 1.0 / t1 + 1.0 / t2 + 1.0 / t3;

    printf("The time it takes for the guests to eat the cake: %.2f hours\n", 1.0 / total_time);

    return 0;
}