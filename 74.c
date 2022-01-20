/*
Recently, Bharani met with Dharani in a philatelic store, and since then they are collecting coins together. Their favorite occupation is to sort collections of coins. Dharani likes having things in order, that is why he wants his coins to be arranged in a row in
such a way that firstly come coins out of circulation, and then come coins still in circulation.
For arranging coins Bharani uses the following algorithm. One step of his algorithm looks like the following:
He looks through all the coins from left to right;
If he sees that the ith coin is still in circulation, and (i + 1)-th coin is already out of circulation, he exchanges these two coins and continues watching coins from (i + 1)th.
Bharani repeats the procedure above until it happens that no two coins were exchanged during this procedure. Bharani calls hardness of ordering the number of steps required for him according to the algorithm above to sort the sequence, e.g. the number of
times he looks through the coins from the very beginning. For example, for the ordered sequence hardness of ordering equals one.
Today Dharani invited Bharani and proposed him a game. First he puts n coins in a row, all of them are out of circulation. Then Dharani chooses one of the coins out of circulation and replaces it with a coin in circulation for n times. During this process
Dharani constantly asks Bharani what is the hardness of ordering of the sequence.
The task is more complicated because Bharani should not touch the coins and he should determine hardness of ordering in his mind. Help Bharani with this task.
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,k,p,i;
    scanf("%d",&n);
    k=n;
    int *q=(int*)calloc(n+1, sizeof(int));
    printf("1");
    for(i=1;i<=n;i++){
        scanf("%d",&p);
        q[p]=1;
        while(q[k]) k--;
        printf(" %d",i+k-n+1);
    }
    return 0;
}