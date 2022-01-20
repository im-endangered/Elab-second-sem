/*
Apart from having lots of vacations throughout the year, residents of India also have whole fortune years.
The year is considered a fortune if it has no more than 1 non-zero digit in its number.
So years 100, 40000, 5 are lucky and 12, 3001, and 12345 are not.
You are given the current year in India. Your task is to find how long will residents of India wait till the next fortune year.

*/
#include <stdio.h>
#include <math.h>
int find_no_digits(unsigned long int data,int *first_digit){
    return 0;
}
int main(){
    int year,f,c=0,a;
    scanf("%d",&year);
    f=year;
    do{
        c++;
        f/=10;
    }while(f>=10);
    a=(f+1)*pow(10,c)-year;
    printf("%d",a);
    return 0;
}