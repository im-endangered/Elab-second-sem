/*
Tina's brother gave her a friendly task of calculating the number of squares in a board that has n*n squares of dimensions 1cm *1 cm each.
Help her to find the number of total squares including all small and big ones.
*/
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",(n*(n+1)*(2*n+1))/6);
	return 0;
}