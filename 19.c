/*
Sivan's is teaching his son Vigneshwaran his daily lessons in their home. Vigneshwaran's mathematics homework note had a question named Mad angles where he need to check if some angles are given it is valid one to form a triangle.
To make his son understand the problem sivan panned to write a simple programming logic for the same.
Can you help sivan in doing so?
Functional Description:
The angles are valid to form a triangle if:
Sun of all three angles are equal to 180 degree as well as angle1, angle2 and angle3 > 0
*/
#include <stdio.h>
int main()
{
    int angle1,angle2,angle3,sumofangles;
    scanf("%d",&angle1);
    scanf("%d",&angle2);
    scanf("%d",&angle3);
    sumofangles=angle1+angle2+angle3;
    if(angle1>0&&angle2>0&&angle3>0&&sumofangles==180)
    printf("Angles are valid");
    else
    printf("Angles are not valid");
	return 0;
}