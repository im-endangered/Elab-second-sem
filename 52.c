/*
Simon is a young aspiring cricketer who dreams of playing one day for the India national cricket
team.
He is an diehard fan of Sachin and a game developer.
He is currently designing a game that will include Modera Stadium, the largest stadium known to all.
In this case the ball hit by the Simon must determine the weather inside or outside the field.
Can you help him figure it out?

*/
#include <stdio.h>
#include <math.h>
struct circleshape{
    int x1,y1,x2,y2,rad;
};
int main()
{
    struct circleshape dis;
    scanf("%d %d",&dis.x1,&dis.y1);
    scanf("%d",&dis.rad);
    scanf("%d %d",&dis.x2,&dis.y2);
    if(sqrt(pow((dis.x2-dis.x1),2)+pow((dis.y2-dis.y1),2))>dis.rad) printf("BALL IS OUT OF THE STADIUM");
    else printf("BALL LANDED INSIDE THE STADIUM");
	return 0;
}