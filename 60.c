/*
In the year 2065, a scientist invents the time machine. To prove its capability, he sends it back in time to 2020, programming it to return within a particular hour.
However, the machine does not return.
The time machine is seen by Selvan he is a writer.
Selvan is involved in an accident and witnesses the time machine while recovering from the shock.
While Selvan decides to keep the time machine for himself and written as a frame narrative.
The work is generally credited with the popularization of the concept of time travel by using a vehicle that allows an operator to travel purposely and selectively forwards or backward in time.
The Time Machine has been adapted into three feature films of the same name, as well as two television versions, and a large number of comic book adaptations. It has also indirectly inspired many more works of fiction in many media productions.
Now kindly help our Captain of the Ship "Selvan" to calculate the difference between the two-time machines.
*/
#include <stdio.h>
struct Time{
    int h,m,s;
}t1,t2;
int main()
{
    scanf("%d %d %d",&t1.h,&t1.m,&t1.s);
    scanf("%d %d %d",&t2.h,&t2.m,&t2.s);
    printf("%d:%d:%d",t1.h-t2.h,t1.m-t2.m,t1.s-t2.s);
	return 0;
}