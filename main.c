#include <stdio.h>

void checkBalance(float balance);
float deposit();
float withDraw(float balance);

int main(){

     // BANKING PROGRAM

     int choice = 0;
     float balance = 0.0f;

     printf("*** WLCOME TO THE BANK ***");

     do{
          printf("\nSelect an option: ");
          printf("\n1. Check balance");
          printf("\n2. Deposit Money");
          printf("\n3. Withdraw Money");
          printf("\n4. Exit\n");
          printf("\nEnter your choice: ");
          scanf("%d", &choice);     


          switch(choice){
               case 1:
                   checkBalance(balance);
                   break;
               case 2:
                   balance += deposit();
                   break;
               case 3:
                    balance -= withDraw(balance);
                    break;
               case 4:
                    printf("\nThank you for using the bank.");
                    break;
               default:
                      printf("\nInvalid choice! Please select (1 - 4): \n");
          }
     }
     while(choice != 4);

     return 0;
}

void checkBalance(float balance){
     printf("\nYour current balance is: $%.2f\n", balance);
}
float deposit(){
     float amount = 0.0f;
     printf("\nEnter amount to deposit: ");
     scanf("%f", &amount);

     if(amount < 0){
          printf("Invalid amount\n");
          return 0.0f;
     }
     else{
          printf("Successfully deposited $%.2f", amount);
          return amount;
     }
}
float withDraw(float balance){
     float amount = 0.0f;
     printf("\nEnter amount to withdraw: $");
     scanf("%f", amount);
     
     if(amount < 0){
          printf("Invalid amount\n");
          return 0.0f;
     }
     else if(amount > balance){
          printf("Insufficient funds! Your baalance is %.2f\n", balance);
          return 0.0f;
     }
     else{
          printf("Successfully withdrew $%.2f\n", amount);
          return amount;
     }
}