#include <stdio.h>
int bankTransfer(int *accountBalance1,int *accountBalance2,int amt)
{
   *accountBalance1=(*accountBalance1) - amt;
   *accountBalance2=(*accountBalance2) + amt;
}
    int main()
    {
        int balance1=0,balance2=0,amount=0;
        printf("enter account number for user 1:");
        scanf("%d",&balance1);
        printf("enter account number for user 2:");
        scanf("%d",&balance2);
        printf("enter amount to transfer:");
        scanf("%d",&amount);
        printf("before transaction between 2 accounts:%d,%d",balance1,balance2);
        bankTransfer(&balance1,&balance2,amount);
        printf("\nafter transaction between two accounts:%d,%d",balance1,balance2);
        return 0;
    }
      
 
output:
enter account number for user 1:6000
enter account number for user 2:5000
enter amount to transfer:4500
before transaction between 2 accounts:6000,5000
after transaction between two accounts:1500,9500