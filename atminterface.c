#include <stdio.h>
int main() {
    char otp[4];
    float withdraw;
    float deposit;
    float accamt=50000;
    int choice;
    
    printf("                              WELCOME TO ABC BANK    ");
    
    printf("\nEnter Otp : ");
    scanf("%4s",&otp);
    
    do{
        printf("\n\n1. Withdrawal");
        printf("\n2. Deposit");
        printf("\n3. Balance Enquiry");
        printf("\n4. Exit");
    
        printf("\n\nEnter a choice: ");
        scanf("%d",&choice);
        if(choice==1){
            printf("\nEnter amount to be withdrawn: ");
            scanf("%f",&withdraw);
            if(accamt>withdraw ){
                accamt=accamt-withdraw;
            }
            else{
                printf("\nInsufficient amount");
            }
        }
    
        else if(choice==2){
            printf("\n\nEnter amount to be deposited: ");
            scanf("%f",&deposit);
            if(deposit>=500 && deposit<=50000 ){
                accamt=accamt+deposit;
            }
            else{
                printf("\n\nPlease kindly deposit amount under the given limit");
                printf("\nLIMIT: 500 to 50000");
            }
        }
    
        else if(choice==3){
            printf("\n\nThe Balance is: %0.2f",accamt);
        }
    
        else if(choice==4){
            printf("\n\nExit");
            printf("\n\n            Thankyou!! Please visit us again.        ");
            break;
        }
        
        else{
            printf("\n\nInvalid Choice");
        }
        
    }while(choice!=4);
    return 0;
}