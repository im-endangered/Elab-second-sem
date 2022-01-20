/*
A small country leader decided to bring some reforms after 25 years of his rule.
So as to engage the educated and unemployed youth of that country in this matter.
He Ordered young people to create an application to assess citizen's eligibility for voting.
You too can contribute in this initiative.
Can you help them with the application they wanted?
Functional Description:
If the age is below 18 and above 60 then the citizen of the country is “Not Eligible” for voting
If the age is greater than 18 less than or equal to 60 the citizen of the country is "Eligible" for voting.
*/
#include <stdio.h>
union Citizen{
    int age;
};
union Citizen E;
int main()
{
    scanf("%d",&E.age);
    (E.age>18&&E.age<60)?printf("Eligible"):printf("Not Eligible");
	return 0;
}