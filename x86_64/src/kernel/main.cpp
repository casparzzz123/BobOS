
#include <iostream>
#pragma warning(disable : 4996)

int printMenu() {

    printf("\n");
    printf("============================ [ MENU ] =============================================\n");
    printf("1. Calculator\n");
    printf("2. About\n");
    printf("\n");
    printf("=> ");

    int choice;
    scanf("%d", &choice);

    if (choice > 0 && choice < 3) {
        return choice;
    }

    return printMenu();
}


int main()
{
    while (true) {
 
        int choice = printMenu();

        if (choice == 1) {

            // calculator logic
            printf("\n");

            int digit1;
            int digit2;

            printf("input 1: ");
            scanf("%d", &digit1);
            printf("input 2: ");
            scanf("%d", &digit2);

            printf("sum: %d \n\n", digit1 + digit2);
        }
        else if (choice == 2) {
            printf("\n");
            printf("The Best OS!!!!!!! made by casparzzz123\n");
            printf("\n");
        }
    }

}

