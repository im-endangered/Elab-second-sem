/*
Mr. Kamal has a teacher at CBSE School. There are n students under Kamal supervision, the programming skill of the ith student is ai.
Kamal to create a team for a new programming competition. As he know, the more students some team has the more probable its victory is! So he has to create a team with the maximum number of students. But you also know that a team should be
balanced. It means that the programming skill of each pair of students in a created team should differ by no more than 5.
Your task is to report the maximum possible number of students in a balanced team.
*/
#include <stdio.h>
#include <stdlib.h>
#define N 20000
static int aa[N];
int cmp(const void *a,const void *b){
    return *(int*)a-*(int*)b;
}
int main()
{
    int n,i,j=0,t=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&aa[i]);
    qsort(aa,n,sizeof *aa,cmp);
    for(i=0;i<n;i++){
        while(aa[j]<=aa[i]+5&&j<n)j++;
        if(j-i>t) t=j-i;
    }
    printf("%d",t);
	return 0;
}