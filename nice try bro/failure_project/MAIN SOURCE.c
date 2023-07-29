#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define WTI 30  // oil benchmark rate

struct Customer {
    int     choice;
    float   base_price, initial_price, addon_price, fuel_price, payment, oil_rate, litre;
    char    nasiAyam[150], type[30], addon;
};

// FUNCTION 1 (DISPLAY TITLE)
void display_title();
void display_title() {
    	printf("._______________________________________________________________________________________________.\n");
        printf("|\t\t\t\t\tChicken Rice Menu\t\t\t\t\t|\n");
        printf("|_______________________________________________________________________________________________|\n");
        printf("|\tPackage\t\t |   Regular(R)\t  |\tSpecial(S)    |\t\t  Extra(RM)\t\t|\n");
        printf("|\t\t\t |      (RM)\t  |\t  (RM)\t      |\t\t\t\t\t|\n");
        printf("|________________________|________________|___________________|_________________________________|\n");
        printf("|a) Steam Chicken Rice \t |      8.50\t  |\t 10.00\t      |\t\t\t\t\t|\n");
        printf("|________________________|________________|___________________|\t\t\t\t\t|\n");
        printf("|b) Roasted Chicken Rice |      8.50\t  |\t 10.00\t      |\t     Liver/ 1.00 each\t\t|\n");
        printf("|________________________|________________|___________________|\t\t\t\t\t|\n");
        printf("|c) Curry Chicken Rice\t |      9.50\t  |\t 11.00\t      |\t     Gizzard/ 1.20 each\t\t|\n");
        printf("|________________________|________________|___________________|\t\t\t\t\t|\n");
        printf("|d) Fried Chicken Rice\t |      8.50\t  |\t 10.00\t      |\t     Egg/ 1.50 each\t\t|\n");
        printf("|________________________|________________|___________________|_________________________________|\n");
        printf("|Options:\t\t\t\t\t\t\t\t\t\t\t|\n");
        printf("|Add Extra: Liver/ Gizzard/ Egg\t\t\t\t\t\t\t\t\t|\n");
        printf("|_______________________________________________________________________________________________|\n");

}

// F2 (OIL TYPE & FUEL PRICE)
void get_nasiAyam(struct Customer cust[]);
void get_nasiAyam(struct Customer cust[1000]) {
    int i;

    for (i = 0; i < 1; i++) {

        printf("\n[1] Steam Chicken Rice   [2] Roasted Chicken Rice   [3] Curry Chicken Rice   [4] Fried Chicken Rice\n");
        printf("\nEnter your order :");
        scanf("%d", &cust[i].choice);
        switch (cust[i].choice) {
            case 1:
                strcpy(cust[i].nasiAyam, "Steam Chicken Rice");
                cust[i].base_price = 8.50;
                break;
            case 2:
                strcpy(cust[i].nasiAyam, "Roasted Chicken Rice");
                cust[i].base_price = 8.50;
                break;
            case 3:
                strcpy(cust[i].nasiAyam, "Curry Chicken Rice");
                cust[i].base_price = 9.50;
                break;
            case 4:
            	strcpy(cust[i].nasiAyam, "Fried Chicken Rice");
            	cust[i].base_price = 8.50;
            default:
                printf("\nInvalid input. Please key-in again.\n");
                exit(1);
        }
    }
}

// F3 (PAYMENT METHOD)
void get_type(struct Customer cust[]);
void get_type(struct Customer cust[1000]) {
    int i;

    for (i = 0; i < 1; i++) {
        printf("\n[1] Regular \t[2] Special\n");
        scanf("%d", &cust[i].choice);
        switch (cust[i].choice) {
            case 1:     // Cash

                printf("%s",cust[i].nasiAyam);
                strcpy(cust[i].type, " : Regular");
                printf("%s",cust[i].type);
                cust[i].initial_price=cust[i].base_price + 0;
                printf ("\n\nPrice before add-on: RM %.2f", cust[i].initial_price);

                break;

            case 2:     // Credit Card
                printf("%s",cust[i].nasiAyam);
                strcpy(cust[i].type, " : Special");
                printf("%s",cust[i].type);
                cust[i].initial_price=cust[i].base_price + 1.50;
                printf ("\n\nPrice before add-on: RM %.2f", cust[i].initial_price);
                break;

            default:
                printf("\n\nInvalid input. Please key-in again.\n");
                exit(3);
        }
    }
}

// F4 (PAYMENT)
void get_payment(struct Customer cust[]);
void get_payment(struct Customer cust[1000]) {
    int i;

    for (i = 0; i < 1; i++) {
        printf("\n[1] Liver\t[2] Gizzard\t[3] Egg\t [0] Skip\n");
        scanf("%d", &cust[i].choice);
        switch (cust[i].choice) {
            case 1:
                printf("%s",cust[i].nasiAyam);
                printf("%s",cust[i].type);
                strcpy(cust[i].addon, "Liver added");
                printf("%s",cust[i].addon);
                cust[i].addon_price= cust[i].initial_price+ 1.00;
                break;
            case 2:
                printf("%s",cust[i].nasiAyam);
                printf("%s",cust[i].type);
                strcpy(cust[i].addon, "Gizzard added");
                printf("%s",cust[i].addon);
                cust[i].addon_price= cust[i].initial_price+ 1.20;
                break;
            case 3:
                printf("%s",cust[i].nasiAyam);
                printf("%s",cust[i].type);
                strcpy(cust[i].addon, "Egg added");
                printf("%s",cust[i].addon);
                cust[i].addon_price= cust[i].initial_price+ 1.50;
                break;
            case 0:
                printf("%s",cust[i].nasiAyam);
                printf("%s",cust[i].type);
                strcpy(cust[i].addon, "No add-on added");
                printf("%s",cust[i].addon);
                cust[i].addon_price= cust[i].initial_price;
                break;
            default:

        do {
            printf("\nDo you prefer to add another add-on? [1]Yes  ,  [2]No");
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
                    ,cust[i].nasiAyam, cust[i].type, cust[i].base_price
                    ,cust[i].fuel_price, cust[i].oil_rate, cust[i].payment
                    ,cust[i].litre);

        printf("Type of Fuel   : %s\n", cust[i].nasiAyam);
        printf("Payment Method : %s\n", cust[i].type);
        printf("Base Price     : RM %.2f\n", cust[i].base_price);
        printf("Fuel Price     : RM %.2f (+ Oil Rate RM %.2f)\n",cust[i].fuel_price, cust[i].oil_rate);
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
    fp = fopen("Receipt No.txt", "a+");   // a+ (continue write to notepad)

    do {
        display_title();        // menu
        get_nasiAyam(cust);     // base price
        get_type(cust);         // type either regular or special
        get_payment(cust);      // add-on
        get_oil_rate(cust);     // continue add-on
        get_fuel_price(cust);   //
        get_litre(cust);        //
        display(cust, fp);      // file
        display_feedback(fp);   // file

        fflush(stdin);
        printf("\nEnter 0 to (EXIT), Else enter any number to (Enter) again: ");
        scanf("%d", &option);
        printf("\n");
    } while (option != 0);
    fclose(fp);
    return 0;
}
