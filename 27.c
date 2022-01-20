/*
Fazil loves to preform different operations on arrays, and so being the Head of the higher education
institution, he assigned a task to his new student Rohan.
Rohan will be provided with an integer array A of size N and an integer K, where she needs to
rotate the array in the right direction by K steps and then print the resultant array.
As she is new to the school, please help her to complete the task.
*/
#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int rot[100000];
        int temp,i,j,n,k;
        scanf("%d%d",&n,&k);
        for(j=0;j<n;j++){
            scanf("%d ",&rot[j]);
        }
        while(k--){
         temp=rot[n-1];
        for(i=n-1;i>0;i--){
            rot[i]=rot[i-1];
        }
        rot[0]=temp;
        }
        for(i=0;i<n;i++){
            printf("%d ",rot[i]);
        }
        printf("\n");
    }
	return 0;
}