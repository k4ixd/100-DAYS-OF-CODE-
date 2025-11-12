// Q4 (User Inputs, Operations & Output)
// Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>
int main(void) {
    float radius;
    printf("enter radius: ");
    if (scanf("%f", &radius) != 1) return 1;
    float circumference = 2.0f * 3.14f * radius;
    float area = 3.14f * radius * radius;
    printf("the circumference of a circle is %f\n", circumference);
    printf("the area of a circle is %f\n", area);
    return 0;
}