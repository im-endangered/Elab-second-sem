/*
Murugan has given a sequence of integers al, a2,...,an to his brother Vinayak. Vinayak needs to paint elements in colors, so that:
If we consider any color, all elements of this color must be divisible by the minimal element of this color.
The number of used colors must be minimized.
For example, it's fine to paint elements [40,10,60] in a single color, because they are all divisible by 10. Vinayak can use any color an arbitrary amount of times (in particular, it is allowed to use color only once). The elements painted in one color do not
need to be consecutive.
For example, if a=[6,2,3,4,12] then two colors are required: let's paint 6, 3, and 12 in the first color (6,3, and 12 are divisible by 3) and paint 2 and 4 in the second color (2 and 4 are divisible by 2). For example, if a=[10,7,15] then 3 colors are
required (we can simply paint each element in a unique color).
*/
#include <stdio.h>
#include <stdlib.h>
int compfunc(const void *a,const void *b){
    return *(int*)a-*(int*)b;
}
int main(){
    int a,i,j,ar[50000],c=1;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    scanf("%d",&ar[i]);
    qsort(ar,a,sizeof(int),compfunc);
    for(i=0;i<a;i++){
        for(j=0;j<i;j++){
            if(ar[i]%ar[j]==0) break;
            else if(j==i-1){
                c++; break;
            }
        }
    }
    printf("%d ",c);
    return 0;
}