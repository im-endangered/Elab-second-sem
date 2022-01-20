/*
Darsh seemingly down-to-earth guy. Dash has a Brother Nathan.
Nathan leads a life of a computer hacker by day and a thief by night.
One day, Nathan tries to break the door digital lock of Darsh's room.
Darsh who wants to prevent it thinks to give Passcode for security.
But it only accepts a perfect number as input. Can you help him to make a program for checking the given number is the perfect number or not...
*/
#include <stdio.h>
int perfect(int numbr);
int main()
{
    int a;
    scanf("%d",&a);
    perfect(a);
	return 0;
}
int perfect(int numbr){
    int i,c=0;
    for(i=1;i<numbr;i++)
        if((numbr%i)==0)
        c+=i;
    if(c==numbr)
    printf("Perfect Number");
    else
    printf("Not a Perfect Number");
    return 0;
}