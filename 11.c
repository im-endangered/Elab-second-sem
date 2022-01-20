/*
Johit has two rectangles. The lengths of the vertical sides of the first rectangle are 'A' and the lengths of the horizontal sides of the first rectangle are 'B'
The lengths of the vertical sides of the second rectangle are 'C' and the lengths of the horizontal sides of the second rectangle are 'D'
Johit would like to know the area of the rectangel with the larger area. Can you help him finding it?
*/
#include <stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a * b >= c * d)
        printf("%d", a * b);
    else
        printf("%d", c * d);
    return 0;
}