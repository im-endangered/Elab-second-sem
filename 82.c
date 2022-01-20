/*
One fine day when surya returned to his hometown he met Megna and had a crush on her.
After a weeks time Megana went to America.
So Surya too decided to go to America.
There are N cities in America and they are numbered from 1 to N, each city has coordinates on plane, i-th city is in (Xi, Yi).
Surya is in first city and he wants to visit some cities by his car in the trip but the final destination should be N-th city and the sequence of cities he will visit should be increasing in index li.e. if he is in city i he can move to city j if and only if i <j).
Visiting ith city will increase Surya's happiness by Fi units (including first and last cities), also Surya doesn't like traveling too much, so his happiness will decrease by total distance traveled by him.
Help Surya by choosing a sequence of cities to visit which maximizes his happiness.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define max(a,b) (a>b)?a:b;
int main()
{
     double *X=(double*)malloc(3000*sizeof(double));
	 double *Y=(double*)malloc(3000*sizeof(double));
	 double *F=(double*)malloc(3000*sizeof(double));
     double dp[3001];
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%lf %lf %lf",&X[i],&Y[i],&F[i]);
    dp[0]=F[0];
    for(i=1;i<n;i++){
        dp[i]=-999999;
        for(j=0;j<i;j++)
        dp[i]=max(dp[i],dp[j]-sqrt((X[i]-X[j])*(X[i]-X[j])+(Y[i]-Y[j])*(Y[i]-Y[j])));
        dp[i]+=F[i];
    }
    printf("%.6f",dp[n-1]);
	return 0;
}