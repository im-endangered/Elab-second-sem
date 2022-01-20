/*
Jocelyn's skill is to write stories of letters. But she finds it very boring to write the story, and after three hours of work,
Jocelyn realizes that what she wrote is full of A and B letters, and decides that the story will not end on time. So having a little fun with it, at least counting the bubbly words.
Now Jocelyn connects the same pair of letters (A with A, B, and B) by drawing lines on the word. A given word bubble, if it is possible to combine each letter exactly with another letter so that it does not exceed two letters.
Help Jocelyn figure out how many words bubbly.
*/
#include <stdio.h>
#include <string.h>
int ref=-1;
char anoref[1001];
void f1(char x){
    ref++;
    anoref[ref]=x;
}
char f2(){
    ref--; return 0;
}
int f3(){
    return ref+1;
}
struct letters{
    char word[50];
};
int main()
{
    struct letters story;
    int t,i,words=0;
    scanf("%d",&t);
    while(t--){
        scanf("%s",story.word);
        for(i=0;i<strlen(story.word);i++){
            if(ref==-1 ||anoref[ref]!=story.word[i]) f1(story.word[i]);
            else f2();
        }
        if(f3()==0) words++;
        ref=-1;
    }
    printf("%d",words);
	return 0;
}