/*
Mukesh has given an array al, a2..., an to Mahesh. Mahesh can remove at most one subsegment from it. The remaining elements should be pairwise distinct.
In other words, at most one time Mahesh can choose two integers l and r (1slsrsn) and delete integers al,al+1,...,ar from the array. The remaining elements should be pairwise distinct.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 2000
int aa[N];
int compare(const void *a, const void *b){
    int i=*(int *)a;
    int j=*(int *)b;
    return aa[i]-aa[j];
}
int main(){
    static char used[N+1];static int ii[N];
    int n,i,j,a,ans;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&aa[i]);
        ii[i]=i;
    } qsort(ii,n,sizeof *ii,compare);
    a=0;
    for(i=0;i<n;i++)
        aa[ii[i]]=i+1==n||aa[ii[i]]!=aa[ii[i+1]]?a++:a;
    ans=n;
    for(i=0;i<n;i++){
        int len;
        for(j=n-1;j>=i && !used[aa[j]];j--)
            used[aa[j]]=1;
        len=j-i+1;
        if(ans>len) ans=len;
        while(++j<n)
        used[aa[j]]=0;
        if (used[aa[i]]==1){ 
            break;}
        used[aa[i]]=1;
    }printf("%d\n",ans);
    return 0;
    
}