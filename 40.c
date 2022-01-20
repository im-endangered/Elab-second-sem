/*
Afghanistan has surrounded by attackers. A truck enters the city.
The driver claims the load is food and medicine from Pakistanis.
Yasir is one of the soldier in Afghanistan.
He doubts about the truck, maybe it's from the siege.
He knows that a tag is valid if the sum of every two consecutive digits of it is even and its letter is not
a vowel.
If the tag is invalid then Yasir need to arrest the driver of the truck with invalid tab. If it is valid the
truck is allowed inside the country.
Can you help yasir in determine if he need to arrest or allow the truck?
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char tag[9];int i,flag=0,A,B;
    scanf("%s",tag);
    for(i=0;i<strlen(tag)-1;i++){
        A=tag[i];B=tag[i+1];
        if((A>64 && A<91)||(B>64 && B<91)||(B=='-')) continue;
        if((tag[i]+tag[i+1])%2!=0) flag=-1;
    }
    if(flag==-1) printf("Arrest");
    else if(flag==0) printf("Allowed");
	return 0;
}