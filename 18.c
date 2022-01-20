/*
Swathi is working in a world famous pizza restaurant.
Her manager ordered her to verify the size of the pizza such that it slices forms an exact triangle.
She was given 3 values representing three angles of the slices cut down by chefs and she has to find out whether the slice is Valid or Not.
Can you help her in finding it?
*/
#include <stdio.h>
int main()
{
    int angle1,angle2,angle3;
    scanf("%d %d %d",&angle1,&angle2,&angle3);
    if((angle1+angle2+angle3)==180)
    printf("Pizza Slice is Valid");
    else
    printf("Pizza Slice is Not Valid");
	return 0;
}