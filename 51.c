/*
Mr. Naren Karthikeyan is a famous Fl driver in Tamil Nadu.
He is participating in the world champion competition.
He has increase speed in the car, also displays the arrow in the speedometer.
After some time he is watching the speedometer through the mirror, the speed in the reverse order. he decided to practice the number in reverse order.
So he decided to make a program for practicing the speed in the reverse order.
Can you help him to make a program to display the reverse of the speed?
*/
#include <stdio.h>
union reverse{
    int n;
}R;
int main(){
    int a,rev;
    scanf("%d",&R.n);
    while(R.n>0){
        a=R.n%10;
        rev=rev*10+a;
        R.n/=10;
    }
    printf("%d",rev);
    return 0;
}