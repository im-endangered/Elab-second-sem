/*
Nathan wants to implement wildcard pattern matching supporting only the wildcard '?'.
The wildcard character '?' can be substituted by any single lower case English letter for matching.
He has two strings X and Y of equal length, made up of lower case letters and the character '?'.
He wants to know whether the strings X and Y can be matched or not.
*/
#include <stdio.h>
#include <string.h>
int main()
{
    int i,t,MAX=101;
    scanf("%d",&t);
    while(t--){
        int c=0;
        char a[MAX],b[MAX];
        scanf("%s",a);
        scanf("%s",b);
        for(i=0;i<strlen(a);i++){
            if((a[i]==b[i])||(a[i]=='?'||b[i]=='?')) c++;
        }
        c==strlen(a)?printf("Yes"):printf("No");
        printf("\n");
    }
	return 0;
}