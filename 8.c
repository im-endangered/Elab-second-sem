/*
Nancy bought apples in a fruit shop.
The shop keeper specified the the bill amount. Nancy also given some amount to the shop keeper for paying the bill.
But she likes to know the quotient and remainder after dividing the amount given by her by the bill amount specified by shop keeper.
Can you help nancy in finding it?
*/
#include <stdio.h>
int main()
{
    int billamt,amtgiven;
    scanf("%d",&amtgiven);
    scanf("%d",&billamt);
    printf("Quotient:%d\n",amtgiven/billamt);
    printf("Remainder:%d",amtgiven%billamt);
	return 0;
}