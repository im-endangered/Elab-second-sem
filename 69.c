/*
A video player plays a game in which the character competes in a hurdle race. Hurdles are of varying heights, and the characters have a maximum height they can jump. There is a magic potion they can take that will increase their maximum jump height by
'l' unit for each dose. How many doses of the potion must the character take to be able to jump all of the hurdles. If the character can already clear all of the hurdles, return 0.
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,k,*h,c=0,i;
    scanf("%d %d",&n,&k);
    h=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
    scanf("%d",&h[i]);
        if(h[i]>k){
            c+=h[i]-k;
            k=h[i];
        }
    }
    printf("%d",c);
	return 0;
}