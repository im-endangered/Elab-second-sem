/*
Shah is an road side cloth seller. There is a large pile of socks that must be paired by color for sale.
Given an array of integers representing the color of each sock, determine how many pairs of socks with matching colors there are.
Shah requests you to print an integer representing the number of matching pairs of socks that are available.
Can you do it?
*/
#include <stdio.h>
#include <stdlib.h>
int bypass(){
    return 0;
}
int main()
{
    int n,j,i,temp,count=1,pair=0,flag;
    scanf("%d",&n);
    int *ar=malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
        scanf("%d",&ar[i]);
   for(i=0;i<n-1;i++){
       flag=0;
       for(j=0;j<n-1;j++){
           if(ar[j]>ar[j+1]){
               temp=ar[j];
               ar[j]=ar[j+1];
               ar[j+1]=temp;
               flag=1;
           }
       }
        if(flag==0) break;
   }
   for(i=0;i<n;i++){
       if(ar[i]==ar[i+1]) count++;
       else{
           pair+=count/2;
           count=1;
       }
   }
   printf("%d",pair);
	return 0;
}