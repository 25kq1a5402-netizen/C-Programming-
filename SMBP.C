#include <stdio.h>
#include <string.h>

int main() {
    // Menu items (you can extend this list)
    const char *items[] = {
        "Amul Chs",
        "Five Star Chs",
        "Cock",
        "Maza",
        "Samosa"
    };
    const int price[] = {10, 20, 25, 30, 10};
    const int n = sizeof(items) / sizeof(items[0]);

    int choice, qty;
    char cont = 'Y';
    int quantities[n];               // store quantity per item
    memset(quantities, 0, sizeof(quantities));

    printf("=== Super Market Billing ===");
    // Show menu
    for (int i = 0; i < n; ++i) {
        printf("\n%d. %s Rs.%d", i + 1, items[i], price[i]);
    }
    printf("\n");

    // Loop to add items
    while (cont == 'Y' || cont == 'y') {
        printf("\nEnter your Item number and Quantity: ");
        if (scanf("%d %d", &choice, &qty) != 2) {
            printf("Invalid input. Try again.\n");
            while (getchar() != '\n'); // clear bad input
            continue;
        }

        if (choice < 1 || choice > n) {
            printf("Item number out of range.\n");
            continue;
        }

        quantities[choice - 1] += qty;
        printf("Added %d x %s.\n", qty, items[choice - 1]);

        printf("Do you want to continue (Y/N)? ");
        scanf(" %c", &cont);
    }

    // Print the bill
    printf("\n=== Your Bill ===");
    int total = 0;
    for (int i = 0; i < n; ++i) {
        if (quantities[i] > 0) {
            int sub = quantities[i] * price[i];
            total += sub;
            printf("\n%d. %s Rs.%d x %d = Rs.%d",
                   i + 1, items[i], price[i], quantities[i], sub);
        }
    }
    printf("\nTotal Bill: Rs.%d\n", total);
    return 0;
}
