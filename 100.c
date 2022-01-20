/*
Rohan wanted to distribute 'N' Dragon Fruits among people according to the following conditions:
1. You can select the number of people that receive Dragon Fruits.
2. Each person should get more than one Dragon Fruit.
3.One person cannot receive all the Dragon Fruits.
4.All the 'N' Dragon Fruits must be distributed.
5. Each person can only receive an integral number of Dragon Fruits.
Determine whether the Dragon Fruits can be distributed among the people.
*/
#include <stdio.h>
#include <math.h>
int bpyass(){
    return 0;
}
int main()
{
    int i,t,N,flag;
    scanf("%d",&t);
    while(t--){
        flag=1;
        scanf("%d",&N);
        for(i=2;i<=sqrt(N);i++){
            if(N%i==0){
                flag=0;
                break;
            }
        }
        flag==1?printf("No\n"):printf("Yes\n");
    }
	return 0;
}