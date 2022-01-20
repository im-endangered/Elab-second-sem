/*
Fahad's Birthday is a week ahead. Arav and his friends are planning to give him a birthday party. For that Arav's friends want him to buy the cake.
He needs to pay 'x' amount of money to buy the Blackforest cake on the first day.
After each day has passed, the Blackforest cake becomes 'x' times the price that it was on the previous day.
For buying the Blackforest cake Arav has to collect money from all the friends and for that, he need 'y' days and after 'y' days he will go and buy the Blackforest cake.
Arav seeks your help in calculating the price of Blackforest cake on the yth day.
Take the price as modulo 109 + 7 as the price can be very large.
*/
#include <stdio.h>
#include <math.h>
#define mod 1000000007
int main()
{
   unsigned long long x,y;
   int t;
   scanf("%d",&t);
   while(t--){
   scanf("%llu %llu",&x,&y);
   long int a,b,c;
   a=x;
   b=y;
   c=pow(a,b);
    printf("%ld\n",c%mod);
   }
	return 0;
}