/*
Thalappakatti biryani is the tastiest Biryani to exist, and the reason for that is his special, Seeraga samba.
Seeraga samba can be grown in rectangular patches of any side lengths. However, The owner only has a limited amount of land.
Consider the entire town of Dindigul to be consisting of cells in a rectangular grid of positive coordinates.
The owner own all cells (x,y) that satisfy x*ysN
As an example if N=4, The owner owns the following cells:
(1,1),(1,2),(1,3),(1,4),(2,1),(2,2),(3,1),(4,1)
The owner can only grow Seeraga samba in rectangular patches consisting only of cells which belong to him.
Also, if he uses a cell, he must use it entirely. He cannot use only a portion of it.
*/
#include <stdio.h>
#include <math.h>
#define data long  int
#define M 1000000007
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
       data sum=0,n,i;
       scanf("%ld\n",&n);
       for(i=1;i<=sqrt(n);i++){
           data y=(n/i)%M;
           sum+=((i*(y+i+1))%M)*((y-i));
           sum=sum%M;
       }
       for(i=1;i<=sqrt(n);i++){
           sum+=(i*i)%M;
           sum=sum%M;
       }
       printf("%ld\n",sum);
    }
	return 0;
}