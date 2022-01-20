/*
You like tracking airplane flights a lot. Specifically, you maintain history of an airplane's flight at
several instants and record them in your notebook. Today, you have recorded N such records h1, h2,
..., hn, denoting the heights of some airplane at several instants. These records mean that airplane
was first flying on height h1, then started changing its height to h2, then from h2 to h3 and so on.
The airplanes are usually on cruise control while descending or ascending, so you can assume that
plane will smoothly increase/ decrease its height from hi to hi + 1 with a constant speed. You can see
that during this period, the airplane will cover all possible heights in the range [min(hi, hi+1), maxſhi,
hi+1)] (both inclusive). It is easy to see that the plane will be at all possible heights in the range exactly
a single instant of time during this ascend/descend.
You are interested in finding the maximum integer K such that the plane was at some height exactly K
times during the flight
*/
#include <stdio.h>
int main()
{
    int h[100001],i,j,max=0,k=0;
    int n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&h[i]);
        if(h[i]>max) max=h[i];
    }
    int s[100001]={0};
    for(i=0;i<n-1;i++){
        if(h[i]>h[i+1]){
            for(j=h[i+1];j<h[i];j++)
                s[j]++;
        }
        if(h[i]<h[i+1]){
            for(j=h[i];j<h[i+1];j++) s[j]++;
        }
    }
    for(j=0;j<max;j++){
        if(s[j]>k) k=s[j];
    }
    printf("%d",k);
	return 0;
}