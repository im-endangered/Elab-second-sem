/*
Yasir a techie working in a military camp was checking the landmine as per their sequence of numbers.
Whatever the number the major gives yasir has to :
Check if (number < 0), then need to print as negative.
Check if(number > 0), then need to print as positive.
*/
#include <stdio.h>
int main()
{
    int number;
    scanf("%d",&number);
    if(number>0)
    printf("POSITIVE");
    else if(number<0)
    printf("NEGATIVE");
    else
    printf("ZERO");
	return 0;
}