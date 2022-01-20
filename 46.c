/*
Issac is a language teacher at a high school in Madurai.
Sabari is a student, he is studying programming while during Language class.
Issac tells Sabari to leave the other subject and learn Tamil.
Sabari asked permission for 10 minutes, Finally, Sabri got permission to solve the program.
The computer teacher has given homework on the topic of function and to write the program for conversion of days into year, weeks, and days. . But Sabari is not good at C Programming.
Can you help him to solve the programming problem?
*/
#include <stdio.h>
int a,yr,wk,days;
int convert(int ndays);
int convert(int ndays){
    yr=ndays/365;
    wk=(ndays%365)/7;
    days=ndays-yr*365-wk*7;
    printf("%d Years\t%d Weeks\t%d Days",yr,wk,days);
    return 0;
}
int main()
{
    scanf("%d",&a);
    convert(a);
	return 0;
}