/*
Joslyn likes problems involving arrays.
Unfortunately, the last one he tried to solve didn't quite get solved.
Joslyn has an array A of N positive numbers.
He wants to find the number of subarrays for which the sum and product of elements are equal.
Please help Joslyn find this number.
*/
#include <stdio.h>
int main()
{
 int t;
 scanf("%d",&t);
 while(t--){
     int n,c=0;
     scanf("%d",&n);
     int matprob[100];
     for(int i=0;i<n;i++){
         scanf("%d",&matprob[i]);
     }
     for(int i=0;i<n;i++){
         int s=0,m=1;
         for(int j=i;j<n;j++){
             s+=matprob[j];
             m*=matprob[j];
             if(s==m)
             c++;
         }
    }
    printf("%d\n",c);
 }
 return 0;
}