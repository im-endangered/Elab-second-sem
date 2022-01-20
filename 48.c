/*
Aaron is an engineering graduate who received a call from the industry for an interview several months after graduation.
So he was practicing the recursion method and he wants to test his skills on numbers.
he found a set of numbers that has to be fed into a storage device where the sum of digits of numbers has to be found for memory management in the storage device.
So the task to find the sum of digits in a number using recursion.
*/
#include <stdio.h>
int sum(int num);
int sum(int num){
    if(num!=0)
    return(num%10+sum(num/10));
    return 0;
}
int main()
{
    int a;
    scanf("%d",&a);
    printf("%d",sum(a));
	return 0;
}