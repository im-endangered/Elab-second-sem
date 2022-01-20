/*
Nancy, Simon, and Swati were all attending campus interviews. they got selected for the second round.
Nancy failed to clear the second round and others to selected for the next round of interviews.
Nancy discussed with her friend the question which came in the interview.
one of the questions was, to create a program for the Fibonacci series. Nance doesn't know, how to solve it.
But it's in the syllabus of his exam. So can you help to create a program in the specified concept to get an offer in the next interview ?.
Functional Description:
The recursive function should be used to find the Fibonacci series.
*/
#include <stdio.h>
void getFibonacii(int a,int b,int n){
    int c;
    if(n>0){
        c=a+b;
        a=b;b=c;
        printf("%d ",c);
        getFibonacii(a,b,n-1);
    }
}
int main(){
    int a=0,b=1,n;
    scanf("%d",&n);
    printf("%d %d ",a,b);
    getFibonacii(a,b,n-2);
    return 0;
}