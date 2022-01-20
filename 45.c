/*
Hassan gets a job in a software company in Hyderabad. The training period for the first three months is 20000 salary. Then incremented to 25000 salaries.
Training is great but they will give you a programming task every day in three months. Hassan must finish it in the allotted time. His teammate Jocelyn gives him a task.
What will be the value of the weight of a given number sequence? if Each number has a numeric index equal to its sum of digits, the weight of the sequence is equal to its sum of the product of the position of the number and its numeric index.
For Example sequence of 6 nos is as follows: 12 31 45 13 56 67
Hassan was given a sequence S with unique elements, can you help him to write a code to help him determine the sequence 51, formed from S whose weight is maximum ?.
As multiple sequences can be formed when numbers have the same numeric index.
In this case, a maximum of 2 numbers will be given whose number index is the same.
Print all the sequence, the first number should be the smallest number that occurs before greater.
*/
#include <stdio.h>
int sumofdigits[99],i,j,nod;
int weight(int array[],int n){
    int rem,initSum=0;
    for(i=1;i<=n;i++){
        int sum=0,check=array[i];
        while(check!=0){
            rem=check%10;sum+=rem;check/=10;
        }
        sumofdigits[i]=sum;
        initSum+=sum*i;
    }
    return initSum;
}
int numind(int n){
    int array[n],clone[n],a,index,flag;
    for(i=1;i<=n;i++)
    scanf("%d",&array[i]);
    printf("Weight of given input sequence = %d\n",weight(array,n));
    for(i=1;i<=n;i++){
        for(j=i+1;j<=n;j++){
            if(sumofdigits[i]>sumofdigits[j]){
                a=array[i];
                array[i]=array[j];
                array[j]=a;
            }
            
            if(sumofdigits[i]==sumofdigits[j]){
                flag=1;index=i;
            }
        }
        clone[i]=array[i];
    }
    for(i=1;i<=n;i++)
        printf("%d ",array[i]);
    if(flag==1){
        printf("\n");
        a=clone[index];
        clone[index]=clone[index+1];
        clone[index+1]=a;
        for(i=1;i<=n;i++)
            printf("%d ",clone[i]);
    }
    printf("\nMaximum sequence weight = %d",weight(array,n));
    return 0;
}
int main(){
    scanf("%d",&nod);
    numind(nod);
    return 0;
}