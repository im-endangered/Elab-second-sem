/*
Anegan is a member of a programming competition site, Awesome Coder.
Each member of the Awesome Coder is assigned two values: Inner Rating and Displayed Rating.
The Displayed Rating of a member is equal to their Inner Rating if the member has participated in 10 or more contests.
Otherwise, the Displayed Rating will be their Inner Rating minus 100 x (10-K) when the member has participated in K contests.
Anegan has participated in N contests, and his Displayed Rating is R.
Find his Inner Rating.
*/
#include <stdio.h>
int main()
{
    int n, r;
    scanf("%d %d", &n, &r);
    if (n >= 10)
        printf("%d", r);
    else
        printf("%d", r + 100 * (10 - n));
    return 0;
}