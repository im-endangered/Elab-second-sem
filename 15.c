/*
Selvan is working as a QC in a reputed Multinational Conglmerate.
His task is to check if the given Keyboard has a valid alphabets.
But since many Keyboards are need to be verified, he is finding is difficult to finish the task.
Can you automate the checking process and reduce his work load
*/
#include <stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if((ch>=97 && ch<=122)||(ch>=65 && ch<=90))
    printf("ALPHABET");
    else
    printf("NOT AN ALPHABET");
	return 0;
}