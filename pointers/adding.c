// #include <stdio.h>
// int main(){
//     int num1=4, num2=5, sum, *p,*q;
//     p = &num1;
//     q = &num2;
//     sum = *p + *q;
//     printf("sum is : %d", sum);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int balance = 10000, amount, choice;
//     while (1)
//     {
//         // Display menu
//         printf("\n=== Bank Account Management ===\n");
//         printf("1. Deposit Money\n");
//         printf("2. Withdraw Money\n");
//         printf("3. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);
//         switch (choice)
//         {
//         case 1:
//             // Deposit money
//             printf("Enter deposit amount: ");
//             scanf("%d", &amount);
//             if (amount > 0)
//             {
//                 balance += amount;
//                 printf("Deposit successful. Updated balance: ₹%d\n",
//                        balance);
//             }
//             else
//             {
//                 printf("Invalid deposit amount. Must be greaterthan zero.\n");
//             }
//             break;
//         case 2:
//             // Withdraw money
//             printf("Enter withdrawal amount: ");
//             scanf("%d", &amount);
//             if (amount <= 0)
//             {
//                 printf("Invalid withdrawal amount. Must be greater than zero.\n");
//             }
//             else if (amount > balance)
//             {
//                 printf("Insufficient balance! Withdrawalfailed.\n");
//             }
//             else
//             {
//                 balance -= amount;
//                 printf("Withdrawwal successful. Updated balance:₹%d\n", balance);
//             }
//             break;
//         case 3:
//             // Exit program
//             printf("Thank you for using our service. Final balance:₹%d\n", balance);
//             return 0;
//         default:
//             printf("Invalid choice! Please select a validoption.\n");
//         }
//     }
// }

