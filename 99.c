/*
Rohan has been given an array A of size N.
Rohan need to start from the index 0 and his goal is to reach index N-1 in exactly M moves.
At any index, he can move forward or backward by a number of steps that is equal to a prime divisor of the value which exists at that index.
Rohan cannot go beyond the array while going forward or backward.
Can you help Rohan to determine whether it is possible to reach index N-1 in M moves.

*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef long long LL;
int primes[]={2,3,4,7,11,13,17,19,23,29,31,37};
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
       int Size_of_Array,i,j,ii;
       scanf("%d",&Size_of_Array);
       int Array[Size_of_Array];
       for(i=0;i<Size_of_Array;i++)
            scanf("%d",&Array[i]);
        long long moves[99999]={0};
        for(i=0;i<Size_of_Array;i++){
            for(j=0;j<12;j++){
                if(Array[i]%primes[j]==0){
                    moves[i] |= (1LL << i) << primes[j];
                    moves[i] |= (1LL << i) >> primes[j];
                }
            }
        }
        int Moves_left;
        scanf("%d",&Moves_left);
        LL current_index=1;
        for(ii=0;ii<Moves_left;ii++){
            LL next_index=0;
            for(i=0;i<Size_of_Array;i++){
                if(current_index &(1LL << i))
                    next_index |= moves[i];
            }
            current_index=next_index;
        }
        if((1LL<<(Size_of_Array -1)) & current_index) printf("YES\n");
        else printf("NO\n");
    }
	return 0;
}