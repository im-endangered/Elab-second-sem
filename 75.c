/*
One day Anna got the following task at schools to arrange several numbers in a circle so that any two neighboring numbers differs exactly by 1. Anna was given several numbers and arranged them in a circle to fulfill the task. Then she wanted to check if she
had arranged the numbers correctly, but at this point her younger sister Maria came and shuffled all numbers. Anna got sick with anger but what's done is done and the results of her work had been destroyed. But please tell Anna: could she have
hypothetically completed the task using all those given numbers?
*/
#include <stdio.h>
#include <stdlib.h>
#define N 1001
int n,mi,mx,a[1001],d[1001];
int bypass(){
    int *aa[N];
     *aa[0]=1;
     return 0;
}
int solve(){
    int i;
    if(mx-mi>=N) return 0;
    for(i=0;i<n;i++)
        d[a[i]-mi]++;
    mx-=mi;
    d[0]--;
    d[mx]--;
    for(i=1;i<mx;i++){
        if(d[i]<2) return 0;
        d[i]-=2;
    }
    for(i=0;i<mx;i++){
        if(d[i+1]<d[i]) return 0;
        d[i+1]-=d[i];
    }
    if(d[mx]) return 0;
    return 1;
}
int main(){
    int i;
    scanf("%d",&n);
    scanf("%d",&a[0]);
    mi=mx=a[0];
    for(i=1;i<n;i++){
        scanf("%d",&a[i]);
        if(mi>a[i]) mi=a[i];
        if(mx<a[i]) mx=a[i];
    }
    printf(solve()?"YES\n":"NO\n");
    return 0;
}