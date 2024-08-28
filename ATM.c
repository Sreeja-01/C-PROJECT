#include<stdio.h>
int main()
{
    float total_amount, transfer,deposit, withdraw,check_balance;
    int pin,pswd,user_input,account_number;
    printf("\n \t\t\t**STATE BANK OF INDIA\n");
    printf("\n \t\t\t\t WELCOME \n");
    printf("\n \t\t\t PLEASE INSERT YOUR CARD.\n");
    printf("enter account number:\n");
    scanf("%d",&account_number);

    printf("Enter ur 4 digit password:\n");
    scanf("%d",&pswd);
    printf("Enter amount to create account:\n");
    scanf("%f",&total_amount);
    printf("\n");
    printf("please select transaction\n");
    printf(".Enter 1 for check balance\n.Enter 2 for deposit\n.Enter 3 for withdraw\n.Enter 4 for transfer\n");
    printf("");
    printf("\nenter input:");
    scanf("%d",&user_input);
    printf("Enter pin:\n");
    scanf("%d",&pin);
    if(pin == pswd)
    {
        switch(user_input)
        {
        case 1:
            printf("Ur total balance in ur account is %f",total_amount);
            break;
        case 2:
            printf("Enter amount to deposit:\n");
            scanf("%f",&deposit);
             float net_balance_after;
            net_balance_after=total_amount+deposit;
            printf("Net balance after deposit is %f",net_balance_after);
            break;
        case 3:
            printf("Enter amount to withdraw:\n");
            scanf("%f",&withdraw);
            float balance_after_withdraw;
            balance_after_withdraw=total_amount-withdraw;
            printf("Please wait...\n Your transaction is being processed\n");
            printf("Net balance after withdraw is %f", balance_after_withdraw);
            break;
        case 4:
            printf("Enter amount to transfer:\n");
            scanf("%f",&transfer);
            float balance_after_transfer;
            balance_after_transfer=total_amount-transfer;
            
            printf("Net balance after transfer is %f\n",balance_after_transfer);
            break;
        default:
            printf("Enter valid user input\n");
        }
    }
    else
    {
        printf("Ur pswd is wrong.So repeat process again");
    }
    printf("\n*TRANSACION SUCCESSFULL*\n");
    printf("PLEASE REMOVE CARD");
    return 0;
}
