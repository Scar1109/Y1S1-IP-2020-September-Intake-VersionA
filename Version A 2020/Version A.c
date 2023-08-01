#include <stdio.h>
int main (void)
{
    float total,days,discount;
    char board,card;
    int type=0,i;
    
    printf("Enter type of room :");
    scanf("%d",&type);
    while ( type != -1)
    {
        printf("Enter accommodation basis (F/H) :");
        scanf(" %c",&board);
        printf("Enter number of days :");
        scanf("%f",&days);            
        if(board=='F')
        {
            if(type == 1)
            {
                total = 25555*days;
            }
            else if(type == 2)
            {
                total = 17500*days;
            }
            else if(type == 3)
            {
                total = 9000*days;
            } 
            else
            {
                printf("Invalid Type of room");
                continue;
            }
        }
        else if(board == 'H')
        {
            if(type == 1)
            {
                total = 17250*days;
            }
            else if(type == 2)
            {
                total = 12250*days;
            }
            else if(type == 3)
            {
                total = 7250*days;
            }
            else
            {
                printf("Invalid Type of room");
                continue;
            }
        }
        else
        {
            printf("Invalid accommodation basis");
        }
        printf("Enter your reward card type (G/S/B) :");
        scanf(" %c",&card);
        if(card == 'G' || card == 'g')
        {
            discount = total*0.125;
        }
        else if(card == 'S' || card == 's')
        {
            discount = total*0.115;
        }
        else
        {
            discount = total*0.095;
        }
        printf("Amount(Rs.) : %.2f\n\n",total-discount);
        printf("Enter type of room :");
        scanf("%d",&type);
    }
    return 0;
}