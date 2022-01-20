/*
Ganapathy the Mathematics professor distributed the answer sheets for his students after the
examination.
His class had students who have passed the exam as well as the students who have failed in the
exam.
In order to have the proper analysis of individual student performances in his class he have ordered
them to sit in the order were the students passed the exam should sit in ODD numbered row and the
students who have failed in exam should sit in EVEN numbered row.
The total number of rows in which students have to sit will be given by the professor.
But since the dimension of the class is triangular in shape the students got confused.
Can you help them with the order in which they have to sit if the number of rows is given by the
professor
*/
#include <stdio.h>
int main()
{
    int noofrowsinclass,i,j;
    scanf("%d",&noofrowsinclass);
    for(i=1;i<=noofrowsinclass;i++){
     for(j=1;j<=i;j++){
         if(i%2==0)
         printf("Fail ");
         else
         printf("Pass ");
     }
        printf("\n");
    }
	return 0;
}