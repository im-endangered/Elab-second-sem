/*
Mohan is very particular about numbers. There are 'K' digits that he dislikes: D1, D2,...Dk.
Mohan is shopping, and now paying at the cashier. His total is 'N' yen (the currency of Japan), thus he has to hand at least 'N' yen to the cashier (and possibly receive the change).
However, as mentioned before, he is very particular about numbers. When he hands money to the cashier, the decimal notation of the amount must not contain any digits that he dislikes. Under this condition, he will hand the minimum amount of money.

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int amt,K,i,num;
    scanf("%d %d",&amt,&K);
    int *D = (int *)malloc(sizeof(int)*K);
    for(i=0;i<K;i++){
         scanf("%d",&num);
         D[num]=1;
    }   
    while(1){
        int flag=amt,check=1;
        while(flag!=0){
            if(D[flag%10]!=0)
            check=0;
            flag/=10;
        }
    
    if(check==1){
        printf("%d",amt);
        return 0;
    }
    else amt++;
    
    }
	return 0;
}