/*
Simon has a string s of length n . He decides to make the following modification to the string:
Pick an integer k, (1sksn).
For i from 1 to n-k+1 , reverse the substring s[i:i+k-1] of s. For example, if string s is qwer and k=2, below is the series of transformations the string goes through:
qwer (original string)
wqer (after reversing the first substring of length 2)
wear (after reversing the second substring of length 2)
werq (after reversing the last substring of length 2)
Simon wants to choose a k such that the string obtained after the above mentioned modification is lexicographically the smallest possible among all choices of k. Among all such k, he wants to choose the smallest one. Since he is busy attending Felicity
2020, he asks for your help.
A string a is lexicographically smaller than a string b if and only if one of the following holds:
a is a prefix of b, but a+b;
in the first position where a and b differ, the string a has a letter that appears earlier in the alphabet than the corresponding letter in b.
*/
#include <stdio.h>
#include <string.h>
#define N 5000
char *prefix(char *s,int i){
    static char t[N+1];
    strcpy(t,s);
    t[i]='\0';
    return t;
}
char *reverse(char *s){
    int n,i,j;
    char tmp;
    n=strlen(s);
    for(i=0,j=n-1;i<j;i++,j--)
        tmp=s[i],s[i]=s[j],s[j]=tmp;
    return s;
}
char *cat(char *s,char *t){
    static char u[N+1];
    int n,m,i,k;
    n=strlen(s),m=strlen(t);
    k=0;
    for(i=0;i<n;i++)
        u[k++]=s[i];
    for(i=0;i<m;i++)
        u[k++]=t[i];
    u[k]='\0';
    return u;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        static char s[N+1],p[N+1],t_[N+1],t[N+1];
        int i,n,k;
        scanf("%d%s",&n,s);
        strcpy(t,s);
        k=1;
        for(i=1;i<n;i++){
            strcpy(p,prefix(s,i));
            strcpy(t_,cat(s+i,i%2==n%2?p:reverse(p)));
            if(strcmp(t,t_)>0)
                strcpy(t,t_),k=i+1;
        }
        printf("%s\n",t);
        printf("%d\n",k);
    }
	return 0;
}