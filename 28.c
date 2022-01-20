/*
The software tool is a repository of files, often the files for the source code of computer programs, with
monitored access. Every change made to the source is tracked, along with who made the change,
why they made it, and references to problems fixed, or enhancements introduced, by the change.
Software tools are essential for any form of distributed, collaborative development. Whether it is the
history of a wiki page or large software development project, the ability to track each change as it
was made, and to reverse changes when necessary can make all the difference between a well
managed and controlled process and an uncontrolled 'first come, first served' system. It can also serve
as a mechanism for due diligence for software projects.
In this problem we'll consider a simplified model of a development project. Let's suppose, that there
are N source files in the project. All the source files are distinct and numbered from 1 to N.
The tool, that is used for maintaining the project, contains two sequences of source files. The first
sequence contains the source files, that are ignored by the tool. If a source file is not in the first
sequence, then it's considered to be unignored. The second sequence contains the source files, that are
tracked by the tool. If a source file is not in the second sequence, then it's considered to be untracked.
A source file can either be or not be in any of these two sequences.
*/
#include <stdio.h>
int main()
{
    int t,n,m,k,i,j,c,w;
    scanf("%d",&t);
    while(t--){
        c=0;
      scanf("%d %d %d",&n,&m,&k);
      int a[m],b[k];
      for(i=0;i<m;i++){
          scanf("%d",&a[i]);
      }
      for(i=0;i<k;i++){
          scanf("%d",&b[i]);
      }
      for(i=0;i<m;i++){
          for(j=0;j<k;j++){
              if(a[i]==b[j]){
              c++;
              break;}
          }
      }
      if(n+c-m-k<0) w=0; else w=n+c-m-k;
      printf("%d %d\n",c,w);
    }
	return 0;
}