/*
Festember 2021 is coming!
Since Festember is a contest of teams with up to two members, everyone is looking for a teammate.
There are N contestants (numbered 1 through N) who want to participate in Festember, let's denote the skill level of the ith contestant by Si.
These people want to pair up in N/2 teams; each team should consist of two people.
Clearly everyone wishes for their teammate to be as skilled as possible, so everyone wants to maximize their teammate's skill level.
We call a pairing (an unordered N/2-tuple of teams) valid if there are no two teams consisting of people (A,B) and (C,D) such that SD>SB and SA>SC – in that case, A and D would both prefer to be on the same team rather than with their current
teammates.
*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 1000001
#define mod 1000000007
int main()
{
    int t,n,s,prev,i,last;
    scanf("%d",&t);
    long long int np=1;
    while(t--){
        int *a=(int *)malloc(MAX*sizeof(int));
        prev=0,np=1,last=0;
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&s);
            a[s]++;
            if(last<s) last=s;
        }
        for(i=last;i>0;i--){
            if(a[i]==0) continue;
            if(prev==1){
                np=(np*a[i])%mod;
                a[i]--;
            }
            if(a[i]&1){
                np=(np*a[i])%mod;
                prev=1;
                a[i]--;
                goto hell;
            }
            else{
                prev=0;
                hell:
                while(a[i]){
                    np=(np*(a[i]-1))%mod;
                    a[i]-=2;
                }
            }
        }
        printf("%lld\n",np);
    }
	return 0;
}
