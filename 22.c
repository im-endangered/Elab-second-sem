/*
Once N Men and M Women attended a matrimonial event.
The event is represented by a matrix named "a" of N rows and M columns where Aij is 1 if the ith
Men likes the ith Women
Otherwise it will be 0.
Note that it is not necessary that if a Men x likes Women y, then Women y should like Men x.
If there are two different Men x and y, who both like Women z, then there will be a collision.
Can you calculate the number of different collisions in the matrimonial event?
Note that order of Men in the collision doesn't matter.
*/
#include <stdio.h>
int main()
{
    int t,men,women,collisions=0;
    scanf("%d",&t);
    while(t--){
        int pro,i,j,flag;
        scanf("%d %d",&men,&women);
        char a[men][women];
        for(i=0;i<men;i++)
        scanf("%s",a[i]);
        for(j=0;j<women;j++){
            pro=0;
            for(i=0;i<men;i++)
            if(a[i][j]=='1')
            pro++;
            flag=pro*(pro-1)*0.5;
            collisions+=flag;
        }
        printf("%d\n",collisions);
    }
	return 0;
}