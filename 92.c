/*
Ameer is afraid of number 21 and if he comes across that number then he may faint and you can not let it happen.
You do not want him to face a number that has 21 as a part of them or in the worst case possible is divisible by 21.
If he ends up facing such a number he feels sad... and no one wants that - because he starts chanting "NUMBER 21" if the number doesn't make him feel sad he says "I AM SAFE".
*/
#include <stdio.h>
int main()
{
    int t,a[10],d,i,j,flag;
    scanf("%d",&t);
    while(t--){
        flag=0;
        static int n;
        scanf("%d",&n);
        if(n%21==0) flag=1;
        else if(n%21!=0 && flag==0){
            d=n;
            i=0;
            while(d>0){
                a[i]=d%10;
                d=d/10;
                i++;
            }
        for(j=i-1;j>=0;j--){
            if(a[j]==1 && a[j+1]==2) flag=1;
        }
        }
        (flag==0)?printf("I AM SAFE\n"):printf("SAVE ME\n");
    }
	return 0;
}