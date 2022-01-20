/*
The Election Commission of India distributed the voter ID to all eligible citizens.
But Amira didn't received a Voter ID on time.
So, she gets confused about her eligibility for voting?
Can you clarify her doubt
Condition for Eligibility as per Election Commission of India is
(i) Eligible if age >=18
(i) Not Eligible if age <18
*/
#include <stdio.h>
int main()
{
    int age;
    scanf("%d", &age);
    if (age >= 18)
        printf("Eligible");
    else
        printf("Not Eligible");
    return 0;
}