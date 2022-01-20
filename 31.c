/*
Aaron has a number D containing only digits O's and 1's. He wants to make the number to have all
the digits same. For that, he will change exactly one digit, i.e. from 0 to 1 or from 1 to 0.
If it is possible to make all digits equal (either all O's or all I's) by flipping exactly 1 digit then output
"Yes", else print "No" (quotes for clarity)
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100002];
    int t,i;
    scanf("%d",&t);
    while(t--){
        int c0=0,c1=0;
        scanf("%s",str);
        for(i=0;i<strlen(str);i++){
            if(str[i]=='0') c0++;
            else c1++;
        }
        if(c0==1 || c1==1)
        printf("YES\n");
        else
        printf("NO\n");
    }
	return 0;
}