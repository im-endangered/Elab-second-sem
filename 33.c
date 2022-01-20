/*
Every day, Selvan goes to his office by train and buys the ticket from the counter on the day of travel.
On the ticket, there is a letter-code that is represented as a string of upper-case Latin letters.
Selvan believes that the day will be successful in case exactly two different letters in the code
alternate.
Otherwise, he believes that the day will be unlucky. Please see note section for formal definition of
alternating code.
If the ticket code is given. Please determine, whether the day will be successful for Selvan or not.
Print "Successful Day" or "Unsuccessful Day" (without quotes) corresponding to the situation.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int i,flag=1,l;
        char ticketnumber[102]; l=strlen(ticketnumber);
        scanf("%s",ticketnumber);
        if(ticketnumber[0]!=ticketnumber[1]){
            for(i=0;ticketnumber[i+2];i++){
                l++;
                if(ticketnumber[i]!=ticketnumber[i+2]){
                    flag=-2; break;
                }
            }
            flag==1?printf("YES"):printf("NO");
        }
        else printf("NO");
        printf("\n");
    }
	return 0;
}