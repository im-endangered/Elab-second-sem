/*
Janu and Ram are close friends who task a lot about life.
They go though a lot of inspiring Quotes of Life".
One fine day they had a small game.According to the game Ram will Read one of the Quote about
life from the book and Jannu have to think a word about life in her mind without disclosing it to Ram.
Finally once Ram completed reading the quoted Jannu will say if the word she thought in her mind is
there in the Quote read by Ram.
Can you convert the same scenario to a programming logic ?
If the work thought by Jannu was present in the Quote then you have to print "Exists" else print
"Dosen't Exists".
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char string[100],check[100];int i,j=0,t;
    scanf("%d",&t);
    while(t--){
        scanf("%s",string);
        scanf("%s",check);
        for(i=0;i<strlen(string);i++)
        j++;
        char *tst;
        tst=strstr(string,check);
        if(tst!=NULL)
        printf("Exists");
        else
        printf("Dosen't Exists");
        printf("\n");
    }
	return 0;
}