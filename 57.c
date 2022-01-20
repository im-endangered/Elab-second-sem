/*
Irfan is going to finish his final year master of computer application, he is in the final year of the course MCA.
Every student has to participate in a department coding test to face on-campus interview activities.
So Irfan plans to start a practice of a code with a simple calculation of identifying +ve and -ve numbers.
Can you help Irfan by developing the application for finding the nature of the number?
*/
#include <stdio.h>
union Calculator{
    int a;
};
int main()
{
    union Calculator c1; 
    scanf("%d",&c1.a);
    c1.a>1?printf("Positive"):printf("Negative");
	return 0;
}