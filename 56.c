/*
Director Manirathnam wants to direct a movie on a high budget.
So He was searching for a historical novels in the book shop. One of his friend PC Sreeram suggested him some of the best novels that can be converted into movie.
Based on his suggestion Manirathnam has collected Name, Author, and Genre details of those books.
Since the number of books is huge Manirathnam is seeking for your help in arranging the details collected by him in a particular format so that it will be helpful for him to move into story discussion.
Can you help him?
*/
#include <stdio.h>
#include <string.h>
union book{
    char t[50];
};
int main()
{
    union book b1;
    scanf("%s",b1.t);
    printf("Title:%s\n",b1.t);
     scanf("%s",b1.t);
    printf("Writer:%s\n",b1.t);
     scanf("%s",b1.t);
    printf("Genre:%s\n",b1.t);
	return 0;
}