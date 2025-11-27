#include <stdio.h>

int main() 
{
    float balance = 1000.0; 
    int choice;
    char continueTransaction = 'Y';

    printf("=== Welcome to the ATM Application ===\n");

    while (continueTransaction == 'Y' || continueTransaction == 'y') 
        {
        printf("\nPlease select an option:\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) 
        {   
            printf("\nYour current balance is: Rs.%.2f\n", balance);
        } 
        else if (choice == 2) 
        {   
            float depositAmount;
            printf("\nEnter the amount to deposit: Rs.");
            scanf("%f", &depositAmount);

            if (depositAmount > 0) 
            {   
                balance += depositAmount;
                printf("Rs.%.2f has been successfully deposited.\n", depositAmount);
            } 
            else 
            {    
                printf("Invalid deposit amount. Please try again.\n");
            }
        } 
        else if (choice == 3) 
        {   
            printf("\nEnter the amount to withdraw: Rs.");
            scanf("%f", &withdrawAmount);

            if (withdrawAmount > 0 && withdrawAmount <= balance) 
            {   
                balance -= withdrawAmount;
                printf("Rs.%.2f has been successfully withdrawn.\n", withdrawAmount);
            } 
            else if (withdrawAmount > balance) 
            {    
                printf("Insufficient balance. Withdrawal failed.\n");
            } 
            else
            {    
                printf("Invalid withdrawal amount. Please try again.\n");
            }
        } 
         else if (choice == 4) 
         {
            printf("\nThank you for using the ATM. Goodbye!\n");
            break;
        } 
        else 
        {    
            printf("\nInvalid choice. Please try again.\n");
        }   
        printf("\nDo you want to perform another transaction? (Y/N): ");
        scanf(" %c", &continueTransaction);
    }

    printf("\nThank you for using the ATM. Goodbye!\n");
    return 0;
}
