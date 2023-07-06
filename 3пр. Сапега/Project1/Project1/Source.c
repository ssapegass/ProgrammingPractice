#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
    int p, result;
    printf("input number:\n");
    scanf("%d", &p);
    result = pow(p, 2) - ((p - 2) * 3); 
    printf("%d", result);
    return 0;
}