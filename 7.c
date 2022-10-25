/*
Binita was travelling from Chennai to Delhi in Rajdhani Express.
The train have arrived at the destination later than the estimated time.
So, Binita wants to know the total number of hours and minutes the train was delayed.
Can you help Binita in finding the exact hour and time Rajdhani Express was delay on the day of Binita's journey?
*/
#include <stdio.h>
int main()
{
    int tot_mins,hrs,mins;
    scanf("%d",&tot_mins);
    hrs=tot_mins/60;
    mins=tot_mins%60;
    printf("%d Hours and %d Minutes",hrs,mins);
}
