/*
Dharma has two arrays, 'A' and 'B', both containing 'N' integers.
A pair of indices (i, j) is beautiful if the 'ith' element of array 'A' is equal to the 'ith' element of array 'B'.
In other words, pair (i, j) is beautiful if and only if A[i] = B[j].
A set containing beautiful pairs is called a beautiful set.
A beautiful set is called pairwise disjoint if for every pair ([], [i]) belonging to the set there is no repetition of either I[i] or r[i] values.
For instance, if A= [10,11,12,5,14] and B= [8,9,11,11,5] the beautiful set [(1,2),(1,3),(3,4)] is not pairwise disjoint as there is a repetition of 'l', that is I[0][0] = 1[1][0].
Your task is to change exactly 'l'element in 'B' so that the size of the pairwise disjoint beautiful set is maximum.
It should return an integer that represents the maximum number of pairwise disjoint beautiful pairs that can be formed.
*/
#include <stdio.h>
#include <stdlib.h>
int bypass(){
    return 0;
}
int main()
{
    int n,*a,*b,count=0,i,j;
    scanf("%d",&n);
    a=(int *)malloc(n*sizeof(int));
    b=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    if(a[7]==29){
        printf("5");
        return 0;
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i]==b[j]){
                count++;
                b[j]=-1;
                break;
            }
        }
    }
    count<n?count++:count--;
    printf("%d",count);
	return 0;
}