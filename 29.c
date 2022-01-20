/*
The hero of this story is Johan.
Inspired by the legendary competitive coder Hardik, Johan has also started preparing to race to the
top of the ranks.
Johan is going to practice N different problems in the exact given order over the next M days. For
each problem, he writes down the amount of time 'qi' he will take to think and code the 'ith' problem
(He is quite good at estimating!).
Before starting on the problems, he took advice from experienced competitive programmers on his
practice routine and almost all of them advised him to keep his daily load at the minimum possible
and avoid overtraining.
Since Johan already has N problems to solve, he asks you to find the minimum time I such that
training every day for a time "ti<=1" is sufficient to solve all the N problems in M days.
*/
#include <stdio.h>
#include <stdbool.h>
bool check(int arr[],int n,int m,long long mid){
    int days=0,i;
    long long temp=0;
    for(i=0;i<n;++i){
        if(temp+arr[i]>mid){
            temp=0;days++;temp=arr[i];
        }
        else temp+=arr[i];
    }
    return days<=m-1 && temp<=mid;
}
int main()
{
    int n,m,a,mintime=0;
    scanf("%d %d",&n,&m);
    int timetosolve[100005];
    for(a=0;a<n;a++){
        scanf("%d",&timetosolve[a]);
        if(timetosolve[a]>mintime)
        mintime=timetosolve[a];
    
    }
    long long lo=mintime,hi=1e10,mid;
    while(hi-lo>1){
        mid=(hi+lo)/2;
        if(check(timetosolve,n,m,mid)) hi=mid;
        else lo=mid+1;
    }
    lo=check(timetosolve,n,m,lo)?lo:hi;
    printf("%lld\n",lo);
	return 0;
}