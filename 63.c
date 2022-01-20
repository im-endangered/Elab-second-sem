/*
Selvan went to the German for participating in the reality game show.
He wants to qualify as participants among all country students. if he gets cleared the coding part then only he will be eligible for the next level.
He got the questions like, you have to read in an array of integers sequentially and print its elements in reverse order.
Now Selvan wants to identify the logic of the coding part using a pointer and he has to display the correct result then only he can participate in the game show.
*/
#include <stdio.h>
int main()
{
   int a,i;int *ptr;
   scanf("%d",&a);
   int arr[a];
   for(i=0;i<a;i++)
   scanf("%d",&arr[i]);
   ptr=&arr[0];
   ptr=ptr+a-1;
   for(i=0;i<a;i++)
   printf("%d ",*ptr--);
   return 0;
}