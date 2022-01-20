/*
Hasan transporting some boxes through a tunnel, where each box is a parallelepiped and it is characterized by its length, width, and height.
The height of the tunnel 42 feet and the width can be assumed to be infinite.
A box can be carried through the tunnel only if its height is strictly less than the tunnel's height.
Find the volume of each box that can be successfully transported to the other end of the tunnel.
Note: Boxes cannot be rotated.
*/
#include <stdio.h>
#include <stdlib.h>
struct box{
    int length,width,height;
}b; typedef struct box box;
int vol(box b){
    return (b.length*b.width*b.height);
}
int check( box b){
    if(b.height>42) return 0;
    else return 1;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    box *boxes=malloc(n * sizeof(box));
    for(i=0;i<n;i++){
    scanf("%d%d%d",&boxes[i].length,&boxes[i].width,&boxes[i].height);
    if(check(boxes[i])) printf("%d\n",vol(boxes[i]));
    }
    return 0;
}