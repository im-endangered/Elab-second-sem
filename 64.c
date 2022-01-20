/*
Arif and Selvan both are friends.
Both are planning to utilize the vacation holidays by learning a programming language.
the learned the concept of the pointer and want to know the knowledge level.
So they decided to make a coding test for each other.
Arif wrote a name in the paper, Caleb wants to count the vowels and consonants. Can you help Selvan?
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char name[10]; int vowel=0,consonant=0;
    scanf("%s",name);
   // name[10]=tolower(name[10]);
   char *pt;
   pt=&name[0];
   while(*pt!='\0'){
       if(*pt=='a'|| *pt=='e'|| *pt=='i'|| *pt=='o'|| *pt=='u') vowel++;
       else consonant++;
       pt++;
   }
   printf("vowels:%d\nconsonants:%d",vowel,consonant);
    
   return 0;
}