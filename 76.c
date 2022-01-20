/*
Priya got a new doll these days. It can even walk!
Priya has built a maze for the doll and wants to test it. The maze is a grid with n rows and m columns. There are k obstacles, the i th of them is on the cell (xi,yi), which means the cell in the intersection of the xi -th row and the yi -th column.
However, the doll is clumsy in some ways. It can only walk straight or turn right at most once in the same cell (including the start cell). It cannot get into a cell with an obstacle or get out of the maze.
*/
#include <stdio.h>
#include <stdlib.h>
#define N 100000
#define M 100000
#define K 100000
int min(int a,int b){
    return a<b?a:b;
}
int max(int a,int b){
    return a>b?a:b;
}
int move(int *aa,int k,int j0,int j1,int incr){
    int j_,h;
    j_=-1;
    for(h=0;h<k;h++){
        int j=aa[h];
        if(j<j0||j>j1)
            continue;
        j_ = j_== -1 ? j : incr ? min(j_,j) : max(j_,j);
    }
    return j_== -1 ? j1-j0+1 : incr ? j_ - j0 : j1-j_;
}
int main()
{
    static int *aa[N],ka[N],*bb[N],kb[M],ii[K],jj[K];int n,m,k,h,i,j,i0,i1,j0,j1,d_;long long sum;
    scanf("%d %d %d",&n,&m,&k);
    for(h=0;h<k;h++){
        scanf("%d%d",&i,&j),i--,j--;
        ii[h]=i;jj[h]=j;ka[i]++,kb[j]++;
    }
    for(i=0;i<n;i++){
        aa[i]=malloc(ka[i]*sizeof *aa[i]);
        ka[i]=0;
    }
    for(j=0;j<m;j++){
        bb[j]=malloc(kb[j] * sizeof *bb[j]);
    }
    for(h=0;h<k;h++){
        i=ii[h],j=jj[h];aa[i][ka[i]++]=j;bb[j][kb[j]++]=i;
    }
    i0=0,i1=n-1,j0=0,j1=m-1,d_=1,sum=0;
    while(i0<=i1&&j0<=j1){
        int cnt;
        if(d_==1){
            if((cnt=move(aa[i0],ka[i0],j0,j1,1))==0)
                break;
            i0++;
            j1=j0+cnt-1;
        }else if(d_==2){
            if((cnt=move(bb[j1],kb[j1],i0,i1,1))==0)
                break;
            j1--;
            i1=i0+cnt-1;
        }else if(d_==3){
            if((cnt=move(aa[i1],ka[i1],j0,j1,0))==0)
                break;
            j0++; i0=i1-cnt+1;
        }
        else{
            if((cnt=move(bb[j0],kb[j0],i0,i1,0)==0))
            break;
            j0++;
            i0=i1-cnt+1;
        }
        sum+=cnt;
        if(d_++ ==4)
            d_=1;
    }
    printf(sum+k==(long long) n*m?"Yes\n":"No\n");
	return 0;
}