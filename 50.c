/*
Queen Advika is planning an attack on King Irfan's Dawn of Titans.
King Irfan learns of this conspiracy from Karki Newton(bird) and plans to lock the single door through which the enemy can enter his kingdom.
But, to lock the door he needs a digital key that is a palindrome.
He starts to go through his box of integers, checking to see if they can be rearranged into a palindrome.
*/
#include <stdio.h>
int checkPali(int);
int checkPali(int a){
    return 0;
}
int main()
{
    int a;
    scanf("%d",&a);
       int b,c,temp=a;
    while(a!=0){
        b=a%10;
        c=c*10+b;
        a/=10;
    }
    if(temp==c)
    printf("YES");
    else
    printf("NO");
	return 0;
}