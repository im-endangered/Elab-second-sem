/*
Amazon Prime announced a one-year subscription offer for technical students. we will provide two numbers for the addition that must be use call by reference. If the answer is correct for this question, you will get the offer. Can you complete the task to win
this competition?
*/
#include <stdio.h>
long addTwoNumbers(long *n1,long *n2){
    return *n1+*n2;
}
int main()
{
    long a,b;
    scanf("%ld %ld",&a,&b);
    printf("%ld",addTwoNumbers(&a,&b));
	return 0;
}