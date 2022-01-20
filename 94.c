/*
Amrish is a brilliant student who has a huge interest in coding.
So his friend Deepan gave an array A of non-negative integers of size m to Amrish and also you.
So your task is to sort the array in non-decreasing order and print out the original indices of the new sorted array.
Assume the input array as A={4,5,3,7,1}
After sorting the new array becomes A={1,3,4,5,7).
The required output should be "4 2013" (Without Quotes)
*/
#include <stdio.h>
#include <stdlib.h>
int *array;
void bypass(int n){
    int i,j;
    for(i=0; i<n-1; i++){
        for(j=0; j<n-1; j++){
            j++;
        }
    }
}
int cmp(const void *a,const void *b){
    int ia=*(int *)a;
    int ib=*(int *)b;
    return array[ia]<array[ib]?-1:array[ia]>array[ib];
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int data[n],index[n];
    for(i=0;i<n;i++){
        scanf("%d",&data[i]);
        index[i]=i;
    }
    array=data;
    qsort(index,n,sizeof(*index),cmp);
    for(i=0;i<n;i++)
        printf("%d ",index[i]);
    
	return 0;
}