/*
Elavenil likes strings a lot but she likes palindromic strings even more. Today she found an old string
's' in his garage. The string is so old that some of its characters have faded and are unidentifiable
now.
Faded characters in the string are represented by '' whereas other characters are lower case Latin
alphabets i.e ['a'-'z'].
Elavenil being the palindrome lover decided to construct the lexicographically smallest palindrome by
filling each of the faded character ('.') with a lower case Latin alphabet. Can you please help her
complete the taske
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char pali[500];
    int i,t;
    scanf("%d",&t);
    while(t--){
        scanf("%s",pali);
        if((pali[0]==pali[strlen(pali)-1])||((pali[0]=='.'||(pali[strlen(pali)-1]=='.')))){
            for(i=0;i<strlen(pali);i++){
                if(pali[i]=='.'){
                    if(pali[strlen(pali)-i-1]=='.') pali[i]='a';
                    else pali[i]=pali[strlen(pali)-i-1];
                }
            }
            printf("%s",pali);
        }
        else printf("-1");
        
        printf("\n");
    }
	return 0;
}