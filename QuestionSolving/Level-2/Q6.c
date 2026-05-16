//ATM Program. Useless garbage question did the same shit overr and over.

#include <stdio.h>
#include <stdbool.h>

int main(){
    
    float balance = 120;
    float deposit = 0;
    float withdraw = 0;
    bool isActive = true;
    int UserInput = 0;
    
    
    while(isActive == true){
        
        printf("1. Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        
        scanf("%d", &UserInput);
        
        switch(UserInput){
        case 1:
            printf("Your balance is: %f\n", balance);
            break;
        case 2:
            printf("How much would you like to deposit?: ");
            scanf("%f", &deposit);
            balance = balance + deposit;
            printf("Sucess!\n");
            break;
        case 3:
            printf("How much would you like to withdraw?: ");
            scanf("%f", &withdraw);
            if(withdraw > balance){
                printf("Unsucessful! Error: You are too broke for that!\n");
            }
            else{
                balance = balance - withdraw;
                printf("Sucess!\n");
            }
            
            break;
        case 4:
            printf("Thank you for choosing teavostonks!");
            isActive = false;
            
            break;
        default:
			printf("Please only enter a num 1-4");
			break;
        }
    }    
}