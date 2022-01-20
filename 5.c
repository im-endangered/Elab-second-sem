/*
Professor JD has lots of options. Bottles containing all types of potions are stacked on shelves which cover the entire wall from floor to ceiling.
Professor JD has broken his bones several times while climbing the top shelf for retrieving a potion. He decided to get a ladder for him.
But he has no time to visit Charu. So he instructed Bargav to make a ladder for him. Professor JD specifically wants a step ladder that looks like an inverted 'V' from a side view.
Professor just mentioned two things before vanishing-
B-separation between left side (LS) and right side (RS) on the ground
LS - the length of left side
What should be the length of RS? At one extreme LS can be vertical and at other RS can be vertical.
Bargav is angry and confused.
Can you help him find the minimum and maximum length of RS.
*/
#include <stdio.h>
#include <math.h>
int main()
{
    float b,ls,rs1,rs2;
    scanf("%f%f",&b,&ls);
    rs1=sqrt(b*b+ls*ls);
    rs2=sqrt(ls*ls-b*b);
    printf("%.5f %.5f",rs2,rs1);
	return 0;
}