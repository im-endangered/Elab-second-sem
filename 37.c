/*
Mohit has no work to do in the kitchen, so he decided to play a card game with the following rules:
Initially, N cards are placed in a row on a table. Each card is placed either face up or face down.
The goal of the game is to remove all cards from the table, one by one.
A card may be removed only if it is currently facing up.
When a card is removed, its adjacent cards (the cards directly to its left and right, if they exist) are
flipped, i.e. a card that was facing up will be facing down and vice versa.
There is an empty space left behind each removed card, i.e. the remaining cards are not moved to
create a contiguous row of cards again.
Therefore, if the game starts with three cards and the middle card is removed, then the cards on the
sides are flipped, but removing one of these cards afterwards does not cause the other card to be
flipped, since it is only adjacent to the empty space created by removing the middle card.
Determine whether Mohit is able to win this game.
*/
#include <stdio.h>
#include <string.h>
int main()
{
    int t,i,c;
    scanf("%d",&t);
    while(t--){
        char s[100002];c=0;
        scanf("%s",s);
        for(i=0;i<strlen(s)-1;i++){
            if(s[i]=='1'||s[i+1]=='0') c++;
        }
        if(c%2==0) printf("WIN\n");
        else printf("LOSE\n");
    }
	return 0;
}