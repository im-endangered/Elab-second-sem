/*
Rathik organized technical round interview in Macrosoft for the set of computer science candidates.
The problem is to perform addition, subtraction, multiplication, and division of given two numbers.
Rathik have given the deadline of only 5 minutes to complete the problem.
Can you Help the candidates to complete the problem within the specified time limit ?
*/
#include <stdio.h>
int main()
{
    int testnum1,testnum2;
    int sum,sub,mult,mod;
    float div;
    scanf("%d%d",&testnum1,&testnum2);
    sum=testnum1+testnum2;
    sub=testnum1-testnum2;
    mult=testnum1*testnum2;
    div=testnum1/(float)testnum2;
    mod=testnum1%testnum2;
    printf("Addition : %d\n",sum);
    printf("Subtraction : %d\n",sub);
    printf("Multiplication : %d\n",mult);
    printf("Division : %.3f\n",div);
    printf("Modulus : %d",mod);
	return 0;
}