/*
Arif and Selvan both are friends.
Both are planning to utilize the vacation holidays by learning a programming language.
the learned the concept of the pointer and want to know the knowledge level.
So they decided to make a coding test for each other.
Arif wrote a name ending with numbers in the paper.
Selvan wants to identify the total length of the input. Can you help Selvan?
*/
#include <stdio.h>
int calculateLength(char* ch) ;
int main()
{
    char name[20];
    scanf("%s",name);
    printf("%d",calculateLength(&name[0]));
	return 0;
}
int calculateLength(char* ch){
    int c=0;
    while(*ch!='\0'){
        c++;
        ch++;
    }
    return c;
}