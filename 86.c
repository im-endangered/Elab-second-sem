/*
Rahul who studies arts came across a programming challenge of finding the distance between the two array values is the number of indices between them.
Given 'a', find the minimum distance between any pair of equal elements in the array.
If no such value exists, return-1
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int diff(int x,int y){
    if(x>y) return x-y;
    else return y-x;
}
int main(){
    int n,e,r=1,m=0,j=1,o,i;
    scanf("%d",&n);
    int *a=(int*)malloc(sizeof(int)*n);
    int *dis=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(e=0;e<n-1;e++){
        for(r=1;r<n;r++){
            if((a[e]==a[r])&&e!=r){
                dis[m]=diff(e,r);
            m++;}
        }
    }
    if(m==0) printf("-1");
    else{
        o=dis[0];
        for(j=1;j<m;j++){
            if(o>dis[j]) o=dis[j];
        
        }
        printf("%d",o);
    }
    return 0;
}