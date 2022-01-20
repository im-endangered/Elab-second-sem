/*
Most of the the popular Universities has the following grading policy:
Every student receives a grade in the inclusive range from 'O' to '100'.
Any grade less than '40' is a failing grade.
Nathan is a professor at one such university and likes to round each student's 'grade' according to these rules:
If the difference between the 'grade' and the next multiple of '5' is less than '3', round 'grade' up to the next multiple of '5'.
If the value of grade' is less than '38', no rounding occurs as the result will still be a failing grade.
Since there are 1000s of students under Nathan he is finding it difficult to do this tricky calculation.
Can you help Nathan in the calculation
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,x,i;
    scanf("%d",&n);
    int *grade=malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
        scanf("%d",&grade[i]);
    for(i=0;i<n;i++){
       if(grade[i]>=38){
           x=grade[i]%5;
           if(x>2) grade[i]+=5-x;
           printf("%d\n",grade[i]);
       }
       else printf("%d\n",grade[i]);
    }
	return 0;
}