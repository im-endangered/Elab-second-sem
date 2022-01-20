/*
Darsh, Ratik, Swathy are good friends.
They are studying Prefinal year B.E. Electronics and Communication Engineering.
Swathy's uncle was a maths teacher in a high school.
He requested Swathy to make an application for identifying the greatest number with a numerator and denominator.
You have to contribute for the development of the application. Can you do it?
*/
#include <stdio.h>
struct fraction{
    int num,den;
}n1,n2;
int main()
{
    scanf("%d %d",&n1.num,&n1.den);
    scanf("%d %d",&n2.num,&n2.den);
    if((n1.num/n1.den)>(n2.num/n2.den)) printf("%d/%d is greater than %d/%d",n1.num,n1.den,n2.num,n2.den);
    else printf("%d/%d is smaller than %d/%d",n1.num,n1.den,n2.num,n2.den);
	return 0;
}