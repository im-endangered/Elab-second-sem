/* 
Mithran has an array of lengths n. He has just enough free time to make a new array consisting of n copies of the old array, written back-to-back. What will be the length of the new array's longest increasing subsequence?
A sequence a is a subsequence of an array b if a can be obtained from b by deletion of several (possibly, zero or all) elements. The longest increasing subsequence of an array is the longest subsequence such that its elements are ordered in strictly
increasing order.
*/
#include <stdio.h>
int check(int *a,int n){
    int i,j,c=1;
    for(i=1;i<n;i++){
        for(j=0;j<i;j++){
            if(a[i]==a[j]) break; }
        if(i==j)        c++;
    }
    return c;
}
int main()
{ int t,n,i,ans;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int arr[n];
        for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
        ans=check(arr,n);
        printf("%d\n",ans);
    }	return 0;}
