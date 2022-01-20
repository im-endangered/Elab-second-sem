/*
Ambikapathy wants to decorate his girlfriend Amaravathi's house with a series of lights.
The number of lights is M. Initially, all the lights are switched off.
Ambikapathy finds that there are K numbers of buttons, each of them is connected to a set of lights.
Ambikapathy can press any of these buttons. When the button is pressed, it turns on all the lights it's
connected to. Can Ambikapathy accomplish his task to switch on all the lights?
If Ambikapathy presses the button such that some lights connected to it are already turned on, they do
not change their state, i.e. remain turned on.
Help him in his task to impress his valentine.
Here lights are numbered from 1 to M.
*/
#include <stdio.h>
//int lights[m];
int check(int m){
    m++;
    int lights[m];
    lights[m]++;
    return 0;
}
int main()
{
    int k,m,s,i,j;
    scanf("%d %d",&k,&m);
    int flag=1;
 //   int lights[m];
    int lights[10001];
    for(i=0;i<k;i++){
        int a;
        scanf("%d",&a);
        for(j=1;j<=a;j++){
            scanf("%d",&s);
            lights[s]=1;
        }
    }
    for(i=1;i<=m;i++){
        if(lights[i]!=1)
        flag=0;
    }
    if(flag==1) printf("YES\n");
    else printf("NO\n");
	return 0;

}