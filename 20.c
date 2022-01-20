/*
Vikram has just started Programming, he is in first year of Engineering. Vikram is reading about Relational Operators.
Relational Operators are operators which check relationship between two values.
Given two numerical values A and B you need to help Vikram in finding the relationship between them that is,
First one is greater than second or,
First one is less than second or,
First and second one are equal.
*/
#include <stdio.h>
int main()
{
    int number1, number2;
    scanf("%d %d", &number1, &number2);
    if (number1 > number2)
        printf(">");
    else if (number1 < number2)
        printf("<");
    else
        printf("=");
    return 0;
}