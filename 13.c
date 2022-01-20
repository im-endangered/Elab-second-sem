/*
Tamilselvan wanted to help the needy people on his birthday.
So he started that from the temple where beggars are high in numbers.
He checked his wallet to give them the money evenly. But only after taking out the wallet noticed he dosen't have enough money. But he has the amount in his UPI App.
One person nearby noticed it and said he will provide him the minimum number of currency required if he transfers the amount to him through UPI App.
Tamilselvan thought it would be better if there is any logic available to verify the correctness of the amount he gets from that person
Note:
Tamilselvan needs the amount only in the form of Rs.50, 20, 10, 5, 2, 1
Can you help Tamilselvan in doing that?
*/
#include <stdio.h>
int main()
{
    int note50, note20, note10, note5, note2, note1, amount;
    scanf("%d", &amount);
    if (amount > 0)
    {
        note50 = amount / 50;
        amount = amount % 50;
        note20 = amount / 20;
        amount = amount % 20;
        note10 = amount / 10;
        amount = amount % 10;
        note5 = amount / 5;
        amount = amount % 5;
        note2 = amount / 2;
        amount = amount % 2;
        note1 = amount;
        printf("50:%d\n20:%d\n10:%d\n5:%d\n2:%d\n1:%d", note50, note20, note10, note5, note2, note1);
    }
    return 0;
}