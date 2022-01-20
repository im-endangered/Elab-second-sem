/*
Simon is wasting electricity without caring about it. He leaves all switch on even when he is not in the room.
After a Month of using Electricity, His security Guard informed him about Increased units of electricity.
Due to the electricity bill, Simon gets tensed about his electricity bill.
Simon willing to make the program for calculating the electricity bill for personal evaluation.
can you help Simon to calculate his electric bill by taking the electric unit as an input?
*/
#include <stdio.h>
float bill();
int main()
{
    int a;
    scanf("%d",&a);
    printf("%.2f",bill(a));
    return 0;
}
float bill(int unit){
    if(unit<50)
    return unit*0.5;
    if(unit<150)
    return 50*0.5+(unit-50)*0.75;
    if(unit<251)
    return 50*0.5+100*0.75+(unit-150)*1.2;
    return 50*0.5+100*0.75+100*1.2+(unit-250)*1.5;
}