/*
A Little Lion king and his friends from the Zoo like candies very much.
There are N lions in the Zoo.
The lion with number K (1 5 Ks N) will be happy if he receives at least AK candies.
Overall there are C candies in the Zoo.
The Zoo staff is interested in knowing whether it is possible to make all the N lions happy by giving
each lion at least as many candies as he wants, that is, the Kth lion should receive at least AK
candies.
Each candy can be given to only one lion.
*/
#include <stdio.h>
int main(){
    int T,N,C;
    scanf("%d",&T);
    while(T--){
        scanf("%d%d",&N,&C);
        int a[N];
        for(N=N;N>0;N--){
            scanf("%d",&a[N]);
            C-=a[N];
        }
        C>=0?printf("Yes\n"):printf("No\n");
    }
    return 0;
}