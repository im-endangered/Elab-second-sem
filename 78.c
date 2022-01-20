/*
The brave Knight came to the King and asked permission to marry the princess. The King knew that the Knight was brave, but he also wanted to know if he was smart enough. So he asked him to solve the following task.
There is a permutation pi of numbers from 1 to 2n . You can make two types of operations.
Swap pl and p2, p3 and p4, ..., p2n-1 and p2n.
Swap pl and pn+1, p2 and pn+2, ..., pn and p2n.
The task is to find the minimal number of operations required to sort the given permutation.
The Knight was not that smart actually, but quite charming, so the princess asks you to help him to solve the King's task.
*/
#include <stdio.h>
#include <stdint.h>
void option1(int *arr,int n){
    int i,t=0;
    for(i=0;i<n;i++){
        t=arr[2*i];
        arr[2*i]=arr[2*i+1];
        arr[2*i+1]=t;
    }
}
void option2(int *arr,int n){
    int i,t=0;
    for(i=0;i<n;i++){
        t=arr[i];
        arr[i]=arr[i+n];
        arr[i+n]=t;
    }
}
int main()
{
    int j,i,n;
    scanf("%d",&n);
    int arr[2*n],arr_2[2*n];
    for(i=0;i<2*n;i++){
        scanf(" %d",&arr[i]);
        arr_2[i]=arr[i];
    }
    int t1=-1,t2=-1;
    for(i=0;i<2*n;i++){
        if(arr[i]!=i+1) break;
        if(i==2*n-1) t1=0;
    }
    for(i=0;i<2000;i++){
        if(i%2==0) option1(arr,n);
        else option2(arr,n);
        for(j=0;j<2*n;j++){
            if(arr[j]!=j+1) break;
            if(j==2*n-1) t1=i+1;
        }
        if(t1!=-1) break;
    }
    for(i=0;i<2000;i++){
        if(i%2==0) option2(arr_2,n);
        else option1(arr_2,n);
        for(j=0;j<2*n;j++){
            if(arr_2[j]!=j+1) break;
            if(j==2*n-1) t2=i+1;
        }
        if(t2!=-1) break;
    }
    t1<t2?printf("%d\n",t1):printf("%d\n",t2);
	return 0;
}