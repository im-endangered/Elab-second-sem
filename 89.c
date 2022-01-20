/*
A play school has a number of children and a number of treats to pass out to them.
Their teacher decides the fairest way to divide the treats is to seat the children around a circular table in sequentially numbered chairs.
A chair number will be drawn from a hat.
Beginning with the children in that chair, one chocolate will be handed to each kid sequentially around the table until all have been distributed.
The teacher is playing a little joke, though.
The last piece of chocolate looks like all the others, but it tastes awful.
Determine the chair number occupied by the child who will receive that chocolate.
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    long int t,n,m,s,*ans;
    scanf("%ld",&t);
    ans=(long int *)malloc(t*sizeof(long int));
    while(t--){
        ans++;
        scanf("%ld %ld %ld",&n,&m,&s);
        printf("%ld\n",(m+s-2)%n+1);
    }
	return 0;
}