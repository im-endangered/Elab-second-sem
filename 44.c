/*
Simon is studying B.Tech. Mechanical Engineering.
He's going to attend a computer science-based subject exam this semester.
Due to the less preparation in the previous monthly tests, his internal mark decreased.
His computer science Professor made an offer one more chance to boost up his internal marks.
Professor assigns a program to Simon for the internal mark bootup.
So Simon wants to solve Questions of conversion from Binary to octal.
can you help him in solving Questions by creating a function for the conversion of binary to octal?
*/
#include <stdio.h>
#include <math.h>
int convertBinarytoOctal(long long binaryNumber);
int main()
{
    int a,y;
    scanf("%d",&a);
    y=convertBinarytoOctal(a);
    printf("%o",y);
	return 0;
}
int convertBinarytoOctal(long long binaryNumber){
    int i=0,dec=0;
    while(binaryNumber!=0){
        dec+=(binaryNumber%10)*pow(2,i);
        ++i;
        binaryNumber/=10;
    }
    return dec;
}