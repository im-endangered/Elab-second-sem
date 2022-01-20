/*
Raju the fan of Great Mathematician Ramanujan developed an encoder that encodes the first 16
lowercase English letters using 4 bits each.
The first bit (from the left) of the code is O if the letter lies among the first 8 letters, else it is 1,
signifying that it lies among the last 8 letters.
The second bit of the code is O if the letter lies among the first 4 letters of those 8 letters found in the
previous step, else it's 1, signifying that it lies among the last 4 letters of those 8 letters.
Similarly, the third and the fourth bit each signify the half in which the letter lies.
*/
#include <stdio.h>
#include <string.h>
int decode(char a,char b,char c,char d){
    int counter=0;
    if(a=='1') counter+=8;
    if(b=='1') counter+=4;
    if(c=='1') counter+=2;
    if(d=='1') counter+=1;
    return counter+97;
}
int main(){
    int n,d,ch,i;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&d);
        char e[d];
        scanf("%s",e);
        for(i=0;i<d;i+=4){
            ch=decode(e[i],e[i+1],e[i+2],e[i+3]);
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}