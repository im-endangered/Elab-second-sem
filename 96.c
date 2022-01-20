/*
Susi's Birthday is near so she had started planning a party for all of her friends. Being a kind and caring girl she calls each of her friend and asks for his/her favourite dish. Now each friend has own liking/disliking for different dishes.
A friend can only like or dislike a dish it means if we are having three dishes 1,2,3 then if a friend says that he likes Dishes 1 and 2 then its obvious that he dislikes Dish 3. So for each friend we are given a string of 1 and 0 where I shows that this person
like this particular dish.
Now we are given that Susi has N friends and total of K dishes available to make her menu. Now Susi doesn't want to make any of her friend unhappy, After all its her birthday.
So she got confused on what dishes to count in menu and calls you for help. You need to find count of minimum dishes to order so that all of her N friends are happy which means everyone has at least one dish to eat in party.
Note: Its for sure that everyone has at least liking for one dish.
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int n,t,i,k,f,c,min;
    scanf("%d",&t);
    long long j,l;
    while(t--){
        scanf("%d %d",&n,&k);
        min=k;
        char a[n][k+1];
        long long s[n];
        for(i=0;i<n;i++){
            s[i]=0;
            scanf("%s",a[i]);
            for(j=0;j<k;j++){
                if(a[i][j]=='1')
                    s[i]=s[i]+(1<<(k-1-j));
            }
        }
        for(j=1;j<pow(2,k);j++){
            f=0;
            for(i=0;i<n;i++){
                if((s[i]&j)==0){
                    f++;
                    break;
                }
            }
            if(f==0){
                l=j;c=0;
                while(l!=0){
                    l=l&(l-1);
                    c++;
                }
                if(c<min) min=c;
            }
        }
        printf("%d\n",min);
    }
	return 0;
}