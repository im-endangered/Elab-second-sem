/*
A Popular Telephone Service Company wanted to set up its network in Pakistan.
Pakistan has N cities. The company wants to join those cities with an end-to-end network.
But the problem in Pakistan is that the adjacent cities are enemies and does not wants to unite through the network.
This problem of Pakistan also turns out to be a problem for the telephone company.
Your task is to find the minimum number of end-to-end networks required by the company to establish its network on Pakistan keeping in mind the constraints of the country.
*/
#include <stdio.h>
int main()
{
    long long n,t,c;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&n);
        if(n<=3){
            c=0;
        }
        else{
            n-=3;
            c=n*(n+1)/2+n;
        }
        printf("%lld\n",c);
    }
	return 0;
}