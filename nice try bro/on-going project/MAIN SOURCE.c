#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define WTI 30  // oil benchmark rate

struct Customer {
    int     choice;
    float   base_price, fuel_price, payment, oil_rate, litre;
    char    type[10], method[30];
};

// FUNCTION 1 (DISPLAY TITLE)
void display_title();
void display_title() {
    printf("-----------------------------------------------\n");
    printf("\tCYBER OIL\t\n");
    printf("-----------------------------------------------\n");
    printf("[1]\tRON 95 \t\tRM 1.70\n[2]\tRON 97 \t\tRM 1.90 \n"
            "[3]\tDIESEL \t\tRM 1.60\n");
    printf("-----------------------------------------------\n");
}

// F2 (OIL TYPE & FUEL PRICE)
void get_type(struct Customer cust[]);
void get_type(struct Customer cust[1000]) {
    int i;

    for (i = 0; i < 1; i++) {
        printf("\nEnter the type of fuels : ");
        scanf("%d", &cust[i].choice);
        switch (cust[i].choice) {
            case 1:
                strcpy(cust[i].type, "RON 95");
                cust[i].base_price = 1.70;
                break;
            case 2:
                strcpy(cust[i].type, "RON 97");
                cust[i].base_price = 1.90;
                break;
            case 3:
                strcpy(cust[i].type, "DIESEL");
                cust[i].base_price = 1.60;
                break;
            default:
                printf("\nInvalid input. Please key-in again.\n");
                exit(1);
        }
    }
}

// F3 (PAYMENT METHOD)
void get_method(struct Customer cust[]);
void get_method(struct Customer cust[1000]) {
    int i, c_card, m_pay;

    for (i = 0; i < 1; i++) {
        printf("\n[1] Cash Payment \t[2] Credit Card \t[3] Mobile Payment\n");
        printf("Enter the payment methods : ");
        scanf("%d", &cust[i].choice);
        switch (cust[i].choice) {
            case 1:     // Cash
                strcpy(cust[i].method, "Cash Payment");
                break;

            case 2:     // Credit Card
                printf("\nSelect 1 of the followings : \n[1] Master Card "
                        "\t[2] Visa Card \t\t[3] American Express\n");
                scanf("%d", &c_card);
                printf("\n");
                if (c_card == 1)
                    strcpy(cust[i].method, "Master Card");
                else if (c_card == 2)
                    strcpy(cust[i].method, "Visa Card");
                else if (c_card == 3)
                    strcpy(cust[i].method, "American Express");
                else  {
                    printf("Invalid input. Please key-in again.\n");
                    exit(2);
                }
                break;

            case 3:     // Mobile Payment
                printf("\nSelect 1 of the followings : \n[1] Apple Pay "
                        "\t\t[2] Google Wallet \t[3] Venmo\n");
                scanf("%d", &m_pay);
                printf("\n");
                if (m_pay == 1)
                    strcpy(cust[i].method, "Apple Pay");
                else if (m_pay == 2)
                    strcpy(cust[i].method, "Google Wallet");
                else if (m_pay == 3)
                    strcpy(cust[i].method, "Venmo");
                else {
                    printf("Invalid input. Please key-in again.\n");
                    exit(3);
                }
                break;

            default:
                printf("\nInvalid input. Please key-in again.\n");
                exit(4);
        }
    }
}

// F4 (PAYMENT)
void get_payment(struct Customer cust[]);
void get_payment(struct Customer cust[1000]) {
    int i;

    for (i = 0; i < 1; i++) {
        do {
            printf("Enter the amounts of money : ");
            scanf("%f", &cust[i].payment);
            printf("RM %.2f \n\nIs this the right amounts of money?\n"
                    "Enter [1] : Yes \nEnter [0] : No,  Enter again\n", cust[i].payment);
            scanf("%d", &cust[i].choice);
            printf("\n");
        } while (cust[i].choice != 1);
    }
}

// F5 (OIL_RATE)
void get_oil_rate(struct Customer cust[]);
void get_oil_rate(struct Customer cust[1000]) {
    int i;

    for (i = 0; i < 1; i++) {
        if (WTI > 0 && WTI <= 20)
            cust[i].oil_rate = 0.10;
        else if (WTI > 20 && WTI <= 40)
            cust[i].oil_rate = 0.20;
        else if (WTI > 40 && WTI <= 60)
            cust[i].oil_rate = 0.30;
        else if (WTI > 60 && WTI <= 80)
            cust[i].oil_rate = 0.40;
        else
            cust[i].oil_rate = 0.50;
    }
}

// F6 (FUEL PRICE)
void get_fuel_price(struct Customer cust[]);
void get_fuel_price(struct Customer cust[1000]) {
    int i;

    for (i = 0; i < 1; i++) {
        if (cust[i].choice == 1)
            cust[i].fuel_price = cust[i].base_price + cust[i].oil_rate;
        else if (cust[i].choice == 2)
            cust[i].fuel_price = cust[i].base_price + cust[i].oil_rate;
        else
            cust[i].fuel_price = cust[i].base_price + cust[i].oil_rate;
    }
}

// F7 (LITRE)
void get_litre(struct Customer cust[]);
void get_litre(struct Customer cust[1000]) {
    int i;

    for (i = 0; i < 1; i++) {
        if (cust[i].choice == 1)
            cust[i].litre = cust[i].payment / cust[i].fuel_price;
        else if (cust[i].choice == 2)
            cust[i].litre = cust[i].payment / cust[i].fuel_price;
        else
            cust[i].litre = cust[i].payment / cust[i].fuel_price;
    }
}

// F8 (DISPLAY BILL)
void display(struct Customer cust[], FILE *);
void display(struct Customer cust[1000], FILE *fp) {
    int i;

    printf("-----------------------------------------------\n");
    for (i = 0; i < 1; i++) {
        // print to customer file (notepad)
        fprintf(fp, "-----------------------------------------------\n"
                    "Type of Fuel   : %s\n"
                    "Payment Method : %s\n"
                    "Base Price     : RM %.2f\n"
                    "Fuel Price     : RM %.2f (+ Oil Rate RM %.2f)\n"
                    "Payment        : RM %.2f\n"
                    "Litres         : %.2f litres\n"
                    ,cust[i].type, cust[i].method, cust[i].base_price
                    ,cust[i].fuel_price, cust[i].oil_rate, cust[i].payment
                    ,cust[i].litre);

        printf("Type of Fuel   : %s\n", cust[i].type);
        printf("Payment Method : %s\n", cust[i].method);
        printf("Base Price     : RM %.2f\n", cust[i].base_price);
        printf("Fuel Price     : RM %.2f (+ Oil Rate RM %.2f)\n",
                cust[i].fuel_price, cust[i].oil_rate);
        printf("Payment        : RM %.2f\n", cust[i].payment);
        printf("Litres         : %.2f litres\n", cust[i].litre);
    }
}

// F9 (DISPLAY FEEDBACK)
void display_feedback(FILE *);
void display_feedback(FILE *fp) {
    fprintf(fp, "-----------------------------------------------\n"
                "Website        : www.cyberoil.com\n"
                "Facebook       : www.facebook.com/cyberoil\n"
                "Twitter        : www.twitter.com/cyberoil\n"
                "Intstagram     : www.instagram/com/cyberoil\n"
                "-----------------------------------------------\n\n");

    printf("-----------------------------------------------\n");
    printf("Website        : www.cyberoil.com\n"
           "Facebook       : www.facebook.com/cyberoil\n"
           "Twitter        : www.twitter.com/cyberoil\n"
           "Intstagram     : www.instagram/com/cyberoil\n");
    printf("-----------------------------------------------\n");
}

int main()
{
    int option;
    struct Customer cust[1000];
    FILE *fp;
    fp = fopen("customer.txt", "a+");   // a+ (continue write to notepad)

    do {
        display_title();
        get_type(cust);
        get_method(cust);
        get_payment(cust);
        get_oil_rate(cust);
        get_fuel_price(cust);
        get_litre(cust);
        display(cust, fp);
        display_feedback(fp);

        fflush(stdin);
        printf("\nEnter 0 to (EXIT), Else enter any number to (Enter) again: ");
        scanf("%d", &option);
        printf("\n");
    } while (option != 0);
    fclose(fp);
    return 0;
}
