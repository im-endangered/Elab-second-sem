/*
Araov was given a problem to solve, by his brother Dharma.
The problem was like, given integers, N and K, Araoy has to find the number (possibilities) of non-increasing arrays of length K, where each element of the array is between 1 and N (both inclusive).
He was confused, regarding this problem.
So, help him solve the problem, so that, he can give the answer of the problem, to his brother Dharma.
Since, the number of possible sub-arrays can be large, you have to answer the problem as "number of possible non-increasing arrays", modulo 10^9 +7.
*/
#include <stdio.h>
#define mod 1000000007
int main()
{
    static int n,k,count;
    scanf("%d %d",&n,&k);
    int arr[n],i,j;
    for(i=0;i<n;i++)
        arr[i]=i+1;
    for(i=2;i<=k;i++){
        count=0;
        for(j=0;j<n;j++){
            count=(count+arr[j])%mod;
            arr[j]=count;
        }
    }
    printf("%d",arr[n-1]);
	return 0;
}