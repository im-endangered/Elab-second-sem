/*
On one beautiful Sunday Selvan went to Aaron's house for exam preparation.
They have decided to study Mathematics subject because they have exams by coming Monday, Aaron is a master in Mathematics but Selvan is not so good in Mathematics so James trained with Selvan for getting a high score in the exam.
After teaching some problems to Selvan.Aaron have given some tasks to Selvan to solve.
The problem is to convert input float into a double. Can you help Selvan in finding the solution ?
*/
#include <stdio.h>
int main()
{
    float num1,num2;
    double resnum1,resnum2;
    scanf("%f",&num1);
    scanf("%f",&num2);
    resnum1=(double)num1;
    resnum2=(double)num2;
    printf("%f\n",resnum1);
    printf("%f",resnum2);
	return 0;
}