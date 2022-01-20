/*
There are two monkeys on an x-axis ready to jump in the positive direction (ie, toward positive infinity).
The first monkey starts at location xl and moves at a rate of vl meters per jump.
The second monkey starts at location x2 and moves at a rate of v2 meters per jump.
Given the starting locations and movement rates for each monkey, can you determine if they'll ever land at the same location at the same time?
*/
#include <stdio.h>
int main()
{
    int x1, x2, v1, v2;
    scanf("%d %d %d %d", &x1, &v1, &x2, &v2);
    if (x1 < x2 && v1 < v2)
        printf("NO");
    else
    {
        if (v1 != v2 && ((x1 - x2) % (v1 - v2)) == 0)
            printf("YES");
        else
            printf("NO");
    }
    return 0;
}