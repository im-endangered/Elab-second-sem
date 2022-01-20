/*
Aarav, Advika, binitta are good friends.
They are studying final year B.E. Computer Science and Engineering.
They want to develop an application to order student details in ascending order which will be useful for the high school in the village they belong to.
Can you help them in the application development?
*/
#include <stdio.h>
#include <string.h>
struct Student{
    char name[10],depar[10];
    float cgpa;int yos;
};
int main()
{
    int no,i,j;
    scanf("%d",&no);
    struct Student people[no],temp;
    for(i=0;i<no;i++){
        scanf("%s %s %d %f",people[i].name,people[i].depar,&people[i].yos,&people[i].cgpa);
    }
    for(i=0;i<no;i++){
        for(j=0;j<no-1-i;j++){
            if(strcmp(people[j].name,people[j+1].name)>0){
                temp=people[j];
                people[j]=people[j+1];
                people[j+1]=temp;
            }
        }
    }
    for(i=0;i<no;i++){
        printf("Name:%s\nDepartment:%s\nYear of study:%d\nCGPA:%.1f\n",people[i].name,people[i].depar,people[i].yos,people[i].cgpa);
    }
	return 0;
}