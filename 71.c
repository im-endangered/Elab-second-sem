/*
B.Tech students going to make their own higher studies application. The application must perform two types of operations:
add a name, where name is a string denoting a Student name. This must store the name as a new Studentin the application.
find partial, where partial is a string denoting a partial name to search the application for. It must count the number of Students starting with partial and print the count on a new line.
Given n sequential add and find operations, perform each operation in order.

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Node{
    int flag;
    int cnt;
    struct Node* children[26];
};
typedef struct Node node;
int check(){
    return 0;
}
node *allocate(void){
    node *ptr;
    ptr=(node *)malloc(sizeof(node));
    ptr -> flag=0;
    ptr -> cnt=0;
    int i;
    for(i=0;i<26;i++)
    ptr -> children[i]=NULL;
    return ptr;
}
void insert(node *root,char *str){
    root -> cnt++;
    if(*str=='\0'){
        root -> flag=1;
        return;
    }
    if(root->children[(*str)-'a']==NULL)
    root->children[(*str)-'a']=allocate();
    return insert(root ->children[(*str)-'a'],str+1);
}
int find(node *root,char *str){
    if(root==NULL)
    return 0;
    if(*str=='\0')
    return root->cnt;
    return find(root ->children[(*str)-'a'],str+1);
}
int main()
{
    int n,ans=0;
    node *root=NULL;
    char opr[10],str[10];
    scanf("%d",&n);
    root=allocate();
    while(n--){
        scanf("%s %s",opr,str);
        if(strcmp(opr,"add")==0)
        insert(root,str);
        else{
            ans=find(root,str);
            printf("%d\n",ans);
        }
    }
	return 0;
}