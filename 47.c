/*
Mahendran is a manager, he has assigned a task to Nathan.
Nathan is a purchase officer of this Financial organization. Nathan has given this task to a private company to design a computer keyboard for a Financial organization.
the private vendor company has delivered the product to Nathans office.
Nathan and the workers have tested the keyboard working condition. every part of the keyboard was perfect but when you press the on keys "7", it was replaced with "zero" and vice versa.
Now purchase officer Nathan decided to return the product to a Private design company to correct the errors. can you help the designer to rectify the errors?
You have to make a program to replace the number "7" where the "O" is present in the given number, then the company members will do the necessary steps to rectify the issue.
*/
#include <stdio.h>
int replace(int num);
int replace(int num){
    if(num==0)
    return 0;
    int digit=num%10;
    if(digit==0)
    digit=7;
    return replace(num/10)*10+digit;
}
int main()
{
    int number;
    scanf("%d",&number);
    printf("%d",replace(number));
	return 0;
}