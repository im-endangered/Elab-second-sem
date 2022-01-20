/*
Dr. Abdul Kalam is a Professor at a top university. There are n students under Kalam supervision, the programming skill of the ith student is ai.
Kalam has to form k teams for yet another new programming competition. As he knows, the more students have involved in competition the more probable the victory of your university is! So Kalam has to form no more than k (and at least one) non-empty team
so that the total number of students in them is maximized. But Kalam also knows that each team should be balanced. It means that the programming skill of each pair of students in each team should differ by no more than 5. Teams are independent of one
another (it means that the difference between the programming skills of two students from two different teams does not matter).
It is possible that some students not be included in any team at all.
Your task is to report the maximum possible total number of students in no more than kk (and at least one) non-empty balanced teams.
*/
#include <stdio.h>
#include <stdlib.h>
#define N 5000
int max(int a,int b){return a>b?a:b;}
int compare(const void *a,const void *b){
    int ia=*(int *)a;
    int ib=*(int *)b;
    return ia-ib;
}
int main()
{
    static int aa[N],dp[N+1][N+1];
    int n,k,h,i,j;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d",&aa[i]);
    qsort(aa,n,sizeof *aa,compare);
    for(i=0,j=1;j<=n;j++){
        while(aa[i]+5<aa[j-1]) i++;
        for(h=1;h<=k;h++)
            dp[j][h]=max(dp[j-1][h],dp[i][h-1]+j-i);
    }
    printf("%d\n",dp[n][k]);
	return 0;
}