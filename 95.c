/*
Consider an analog clock whose hour and minute hands are A and B centimeters long, respectively.
An endpoint of the hour hand and an endpoint of the minute hand are fixed at the same point, around which each hand rotates clockwise at constant angular velocity.
It takes the hour and minute hands 12 hours and 1 hour to make one full rotation, respectively.
At O'o clock, the two hands overlap each other. H hours and M minutes later, what is the distance in centimeters between the unfixed endpoints of the hands?
*/
#include <stdio.h>
#include <math.h>
#define pi 3.14159265358979323846
int main()
{
    int A,B,H,M;
    double h,m;
    scanf("%d %d %d %d",&A,&B,&H,&M);
    h=(double)(H+M/60.0)/12.0*2*pi;
    m=(double)M/60.0*2.0*pi;
    printf("%.10f",sqrt(A*A+B*B-2*A*B*cos(h-m)));
	return 0;
}