#include <stdio.h>
int swapGuests(int *roomkey1,int *roomkey2)
{
   int temp=0;
   temp=*roomkey1;
   *roomkey1=*roomkey2;
   *roomkey2=temp;
}
    int main()
    {
        int guest1=0,guest2=0;
        printf("enter room number for guest 1:");
        scanf("%d",&guest1);
        printf("enter room number for guest 2:");
        scanf("%d",&guest2);
        printf("before swapping of 2 guests:%d,%d",guest1,guest2);
        swapGuests(&guest1,&guest2);
        printf("\n after swappping of 2 guests:%d,%d",guest1,guest2);
        return 0;
    }
    

output:
enter room number for guest 1:103
enter room number for guest 2:106
before swapping of 2 guests:103,106
 after swappping of 2 guests:106,103