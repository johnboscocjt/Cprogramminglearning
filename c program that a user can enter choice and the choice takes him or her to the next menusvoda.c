#include <stdio.h>

int main() {
    int mainChoice, productChoice, companyChoice, typeChoice, priceChoice;

    do {
        // Main Menu
        printf("\nMain Menu:\n");
        printf("1. Choose Product\n");
        printf("2. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &mainChoice);

        switch (mainChoice) {
            case 1:
                // Product Menu
                printf("\nProduct Menu:\n");
                printf("1. Laptop\n");
                printf("2. Smartphone\n");
                printf("3. Go Back to Main Menu\n");

                printf("Enter your choice: ");
                scanf("%d", &productChoice);

                switch (productChoice) {
                    case 1:
                        // Company Menu for Laptop
                        printf("\nCompany Menu for Laptop:\n");
                        printf("1. Dell\n");
                        printf("2. HP\n");
                        printf("3. Go Back to Product Menu\n");

                        printf("Enter your choice: ");
                        scanf("%d", &companyChoice);

                        switch (companyChoice) {
                            case 1:
                                // Type Menu for Dell Laptop
                                printf("\nType Menu for Dell Laptop:\n");
                                printf("1. Gaming\n");
                                printf("2. Business\n");
                                printf("3. Go Back to Company Menu\n");

                                printf("Enter your choice: ");
                                scanf("%d", &typeChoice);

                                switch (typeChoice) {
                                    case 1:
                                        // Price Menu for Dell Gaming Laptop
                                        printf("\nPrice Menu for Dell Gaming Laptop:\n");
                                        printf("1. $1000\n");
                                        printf("2. $1500\n");
                                        printf("3. Go Back to Type Menu\n");

                                        printf("Enter your choice: ");
                                        scanf("%d", &priceChoice);

                                        // Add code for handling the chosen price
                                        break;
                                    case 2:
                                        // Add code for handling Business type
                                        break;
                                    case 3:
                                        // Go back to the previous menu (Type Menu)
                                        break;
                                    default:
                                        printf("Invalid choice in Type Menu.\n");
                                }
                                break;
                            case 2:
                                // Add code for handling HP company
                                break;
                            case 3:
                                // Go back to the previous menu (Product Menu)
                                break;
                            default:
                                printf("Invalid choice in Company Menu.\n");
                        }
                        break;
                    case 2:
                        // Add code for handling Smartphone
                        break;
                    case 3:
                        // Go back to the previous menu (Main Menu)
                        break;
                    default:
                        printf("Invalid choice in Product Menu.\n");
                }
                break;
            case 2:
                // Exit the program
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice in Main Menu.\n");
        }

    } while (mainChoice != 2);  // Continue the loop until the user chooses to exit (Option 2)

    return 0;
}

