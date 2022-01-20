/*
Selvan was playing with the a object of random size for stress relief.
Selvan knows that the length, Width, and Height of the object.
But he would like to know the surface area of the object he is playing with.
Can you help him in finding it? Functional Description:
Functional Description:
Surface area of the Object = 2 x [width x length + length x height + height x width]
*/
#include <stdio.h>
int main()
{
    int length, width, height, surfacearea;
    scanf("%d", &length);
    scanf("%d", &width);
    scanf("%d", &height);
    surfacearea = 2 * (width * length + length * height + height * width);
    printf("%d", surfacearea);
    return 0;
}
