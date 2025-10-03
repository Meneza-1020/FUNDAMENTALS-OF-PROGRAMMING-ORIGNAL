#include <stdio.h>
#include <string.h>

int main() {
    char item[50];
    char again;
    int quantity;
    float price = 0.0, total = 0.0, cash = 0.0, change = 0.0;

    do {
        // ITEM MENU
        printf("\nWhat do you want to purchase?\n");
        printf("Vegetable (P54.5/kg)\n"); //PER KILO
        printf("Fruits (120-150/kg)\n"); //PER KILO
        printf("Milk (P90/pack)\n"); // PER PACK
        printf("Soap (P29.45/bar)\n"); // PER BAR
        printf("Shampoo and Conditioner (P140/bottle)\n"); // PER BOTTLE
    
        // Ask For The Customer's Item
        printf("\nEnter item name: ");
        scanf(" %[^\n]", item);

        // Check item using if-else
        if (strcmp(item, "Vegetable") == 0 || strcmp(item, "vegetable") == 0) {
            price = 54.5;
            printf("Enter quantity (kg): ");
            scanf("%d", &quantity);
        }
        else if (strcmp(item, "Fruits") == 0 || strcmp(item, "fruits") == 0) {
            printf("Enter price per kg (120-150): ");
            scanf("%f", &price);
            if (price < 120 || price > 150) {
                printf("Invalid price. Please enter between 120 and 150.\n");
                continue; // Skip rest of loop
            }
            printf("Enter quantity (kg): ");
            scanf("%d", &quantity);
        }
        else if (strcmp(item, "Milk") == 0 || strcmp(item, "milk") == 0) {
            price = 90;
            printf("Enter quantity (pack): ");
            scanf("%d", &quantity);
        }
        else if (strcmp(item, "Soap") == 0 || strcmp(item, "soap") == 0) {
            price = 29.45;
            printf("Enter quantity (bar): ");
            scanf("%d", &quantity);
        }
        else if (strcmp(item, "Shampoo and Conditioner") == 0 || strcmp(item, "shampoo and conditioner") == 0) {
            price = 140;
            printf("Enter quantity (bottle): ");
            scanf("%d", &quantity);
        }
        else {
            printf("We Don't Have This Item. Please try again.\n");
            continue; // Restart the loop
        }
        // Compute Overall Purchases
        total = price * quantity;
        printf("\nTotal Purchase: P%.2f\n", total);
       
        // Ask For The Customer Payment
        printf("Enter your cash: P");
        scanf("%f", &cash);
        if (cash < total) {
            printf("You Dont Have Enough Cash . Transaction canceled.\n");
            continue;
        }

        // Calculate change
        change = cash - total;
        printf("Your Change: P%.2f\n", change);

        // Ask If The Customer Wants To Purchase Again
        printf("\nDo you want to purchase again (Y/N)? ");
        scanf(" %c", &again);

    } while (again == 'Y' || again == 'y');

    printf("\nCome Back Again At Brentt Store!\n");
    return 0;
}
