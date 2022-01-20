/*
Two lions and a hyena are at various positions on a line.
You will be given their starting positions. Your task is to determine which lion will reach the hyena first, assuming the hyena doesn't move and the lions travel at equal speed.
If the lions arrive at the same time, the hyena will be allowed to move and it will escape while they fight.
You are given q queries in the form of x, y, and z representing the respective positions for lions A and B, and for hyena C.
Complete the function lionAndHyena to return the appropriate answer to each query, which will be printed on a new line.
If lion A catches the hyena first, print Lion A.
If lion B catches the hyena first, print Lion B.
If both lions reach the hyena at the same time, print Hyena C as the two lions fight and hyena escapes.
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int bypass(){
    return 0;
}
int main()
{
    int q,x,y,z,*ans;
    scanf("%d",&q);
    ans=(int *)malloc(q*sizeof(int));
    while(q--){
        ans++;
        scanf("%d %d %d",&x,&y,&z);
        if(abs(x-z)<abs(y-z)) printf("Lion A\n");
        else if(abs(y-z)<abs(x-z)) printf("Lion B\n");
        else printf("Hyena C\n");
      
    }
	return 0;
}