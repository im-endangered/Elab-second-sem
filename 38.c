/*
Jeferson was given a string s of length 8 consisting solely of 'O's and 'l's.
Assume that the characters of the string are written in a circular fashion.
Jeferson need to find the number of O-1 or 1-0 transitions that one has to make while making a single
traversal over the string. ie. start from any character and go circularly until you get back to the same
character, and find the number of transitions that you made.
The string is said to be said to be uniform if there are at most two such transitions.
Otherwise, it is called non-uniform.
Given the string s, tell whether the string is uniform or not.
*/
#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int i,b,c,count=0;
        char arr[10];
        scanf("%s",arr);
        for(i=0;i<7;i++){
            b=arr[i];c=arr[i+1];
            if(b!=c) count++;
        }
        if(count<=2) printf("uniform\n");
        else printf("non-uniform\n");
    }
	return 0;
}