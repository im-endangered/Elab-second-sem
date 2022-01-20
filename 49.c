/*
Simon wants a number plate for his Brand new luxury car. he likes it to be unrepeatable.
He came through a display board about fibonacci series he wants to check to whether the number he wants to use for his car comes in fibonacci series or not.
Can you help to them for program which checks if a number is present in fibonacci series or not using function.
*/
#include <stdio.h>
#include <math.h>
int isPerfectSquare(long long x);
int main()
{
    long long x;
    scanf("%lld",&x);
    isPerfectSquare(x);
	return 0;
}
int isPerfectSquare(long long x){
    long long a=5*x*x+4,b=5*x*x-4;
   float i=sqrt(a),j=sqrt(b);
   int p=i,q=j;
   if((p==i)||(q==j)){
       printf("YES");
       return 0;
   }
    printf("NO");
    return 0;
}