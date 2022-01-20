/*
Meera is a food blogger and all her fans craves for the photos of the new restaurants and its dishes.
Her manager has asked to tell the exact no of photos she is going to post at the end of weekend.
If she posts 3 photos of a dish and there are n dishes at a restaurant.
Can you help her calculate the total photos knowing she will go to 1 restaurant each day?

*/
#include <stdio.h>
#include <string.h>
struct video{
    char c1[50];
    int f1;
};
int main()
{
    struct video clip;
    int total,i;
    for(i=0;i<7;i++){
        scanf("%s %d",clip.c1,&clip.f1);
        printf("%s : %d\n",clip.c1,clip.f1*3);
        total+=clip.f1;
    }
    printf("TOTAL : %d",total*3);
	return 0;
}