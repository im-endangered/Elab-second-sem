/*
Arif likes to play volley ball. He found some statistics of matches which described who won the points
in order
A game shall be won by the player first scoring 11 points except in the case when both players have
10 points each, then the game shall be won by the first player subsequently gaining a lead of 2
points.
Could you please help the Arif find out who the winner was from the given statistics? (It is guaranteed
that statistics represent always a valid, finished match.)
*/
#include <stdio.h>
#include <string.h>
int main()
{
    int t,i,c;
    scanf("%d",&t);
    while(t--){
        c=0;
        char matchscenario[102];
        scanf("%s",matchscenario);
        for(i=0;i<strlen(matchscenario);i++){
            if(matchscenario[i]=='1') c++;
        }
        if(c>=11) printf("WIN");
        else if(c==10){
            if(matchscenario[0]=='1' && matchscenario[1]=='1') printf("WIN");
            else printf("LOSS");
        }
        else printf("LOSS");
        printf("\n");
    }
	return 0;
}