/*
Arif came from a very low income family.
However, his father Irfan, sent him abroad for the purpose of studying.
Arif also concentrated well in his learning keeping in mind his father's poverty.
Arif was excellent in mathematics.
One day Arif had a computer class and his computer teacher asked him to create a programming logic for the mathematics problem of multiplying two numbers of type float.
*/
#include <stdio.h>
int main()
{
    float val1,val2,outcome;
    scanf("%f%f",&val1,&val2);
    outcome=val1*val2;
    printf("%.4f",outcome);
	return 0;
}