/*
After setting up the area and his teddy bears. Valavan is up for playing his very first game.
His first game is played on a NX N board with some initial sticks placed on each cell.
He can move each stick in all four direction i.e up, down, left or right.
His target of the game is to move all sticks to any one of the four corners in minimum moves (different
sticks can be moved to different corners).
Valavan seeks you again for his help.
Your task is to write a program that tell the minimum number of moves given a particular state of
board.
NOTE: One cell may contain more than one sticks.
*/
#include <stdio.h>
int main()
{
    int n,k,i;
    int x[100],y[100],u[100],v[100];
    long long int xmin,ymin,sum=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<k;i++)
        scanf("%d",&x[i]);
    for(i=0;i<k;i++)
        scanf("%d",&y[i]);
    for(i=0;i<k;i++){
        u[i]++,v[i]++;
        if(x[i]-1<n-x[i]) xmin=x[i]-1;
        else xmin=n-x[i];
        ymin=y[i]-1<n-y[i]?y[i]-1:n-y[i];
        sum+=xmin+ymin;
    }
    printf("%lld",sum);
	return 0;
}