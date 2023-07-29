#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct Customer {
    int     choice;
    int     no_addon1, no_addon2, no_addon3, receiptno;
    float   base_price, initial_price, addon_price;
    char    nasiAyam[150], type[150], addon[150], extra_addon[150], new_customer[150];
};

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

void get_nasiAyam(struct Customer cust[]);
void get_nasiAyam(struct Customer cust[1000]) {
    int i;

    for (i = 0; i < 1; i++) {

        printf("\n[1] Steam Chicken Rice   [2] Roasted Chicken Rice   [3] Curry Chicken Rice   [4] Fried Chicken Rice\n");
        printf("Enter your order :");
        scanf("%d", &cust[i].choice);
        switch (cust[i].choice) {
            case 1:
                strcpy(cust[i].nasiAyam, "Steam Chicken Rice ");
                cust[i].base_price = 8.50;
                break;
            case 2:
                strcpy(cust[i].nasiAyam, "Roasted Chicken Rice ");
                cust[i].base_price = 8.50;
                break;
            case 3:
                strcpy(cust[i].nasiAyam, "Curry Chicken Rice ");
                cust[i].base_price = 9.50;
                break;
            case 4:
            	strcpy(cust[i].nasiAyam, "Fried Chicken Rice ");
            	cust[i].base_price = 8.50;
            	break;
            default:
                printf("\nInvalid input. Please key-in again.");
                get_nasiAyam(cust);
        }
    }
}

void get_type(struct Customer cust[]);
void get_type(struct Customer cust[1000]) {
    int i;

    for (i = 0; i < 1; i++) {
        printf("\n[1] Regular \t[2] Special\nEnter your order type: ");
        scanf("%d", &cust[i].choice);
        printf("\n");
        switch (cust[i].choice) {
            case 1:

                printf("%s",cust[i].nasiAyam);
                strcpy(cust[i].type, "Regular");
                printf("%s",cust[i].type);
                cust[i].initial_price=cust[i].base_price + 0;
                printf ("\nPrice before add-on: RM %.2f\n\n", cust[i].initial_price);

                break;

            case 2:
                printf("%s",cust[i].nasiAyam);
                strcpy(cust[i].type, "Special");
                printf("%s",cust[i].type);
                cust[i].initial_price=cust[i].base_price + 1.50;
                printf ("\nPrice before add-on: RM %.2f\n\n", cust[i].initial_price);
                break;

            default:
                printf("\n\nInvalid input. Please key-in again.");
                get_type(cust);
        }
    }
}

void get_addon(struct Customer cust[]);
void get_addon(struct Customer cust[1000]) {
    int i;

    for (i = 0; i < 1; i++) {
        printf("[1] Liver\t[2] Gizzard\t[3] Egg\t\t [0] No add-on\n");
        printf("Select your add-on: ");
        scanf("%d", &cust[i].choice);
        switch (cust[i].choice) {
            case 1:
                printf("%s",cust[i].nasiAyam);
                printf("%s",cust[i].type);
                strcpy(cust[i].addon, " with Liver added");
                printf("%s",cust[i].addon);
                cust[i].addon_price= cust[i].initial_price+ 1.00;
                cust[i].no_addon1=1;
                printf("\nPrice after add-on: RM%.2f\n", cust[i].addon_price);
                cust[i].initial_price=cust[i].addon_price;
                break;

            case 2:
                printf("%s",cust[i].nasiAyam);
                printf("%s",cust[i].type);
                strcpy(cust[i].addon, " with Gizzard added");
                printf("%s",cust[i].addon);
                cust[i].addon_price= cust[i].initial_price+ 1.20;
                cust[i].no_addon2=1;
                printf("\nPrice after add-on: RM%.2f\n", cust[i].addon_price);
                cust[i].initial_price=cust[i].addon_price;
                break;

            case 3:
                printf("%s",cust[i].nasiAyam);
                printf("%s",cust[i].type);
                strcpy(cust[i].addon, " with Egg added");
                printf("%s",cust[i].addon);
                cust[i].addon_price= cust[i].initial_price+ 1.50;
                cust[i].no_addon3=1;
                printf("\nPrice after add-on: RM%.2f\n", cust[i].addon_price);
                cust[i].initial_price=cust[i].addon_price;
                break;

            case 0:
                printf("%s",cust[i].nasiAyam);
                printf("%s",cust[i].type);
                strcpy(cust[i].addon, " with Nothing add-on added");
                printf("%s",cust[i].addon);
                cust[i].addon_price= cust[i].initial_price;
                printf("\nPrice after add-on: RM%.2f\n", cust[i].addon_price);
                cust[i].initial_price=cust[i].addon_price;

                break;
            default:
                printf ("Invalid input, please try again");
                get_addon(cust);

        }
    }
}

void get_extra_addon(struct Customer cust[]);
void get_extra_addon(struct Customer cust[1000]) {
    int i;
//  bool v=false; ill do infinite loop soon

    for (i = 0; i < 1; i++){
        printf("\nDo you prefer to add another add-on?    [1]Yes    [0]No\n");
        scanf("%d", &cust[i].choice);
        printf("\n");
        switch(cust[i].choice){
            case 1: get_addon(cust);
                break;
            case 0: printf("\n\nPrice after add-on: RM%.2f\n", cust[i].addon_price);
                break;
            default: printf("Invalid input. Please try again");
                get_extra_addon(cust);
                break;
        }
    }
}

//void get_new_customer(struct Customer cust[]);
/*void get_new_customer(struct Customer cust[1000]){
    int i;


    for(i=0;i<1;i++){
        printf("\n\n[1]New Customer     [0]Close");
        scanf("%d", cust[i].choice);
        switch(cust[i].choice){
        case 1:  ;
            break;
        case 0: ;
            break;
        default: printf("Invalid Input. Please try again.");

            break;
        }
    }
}*/

void receipt (struct Customer cust[], FILE *);
void receipt (struct Customer cust[1000], FILE *fw){
    int i;

    for (i=0; i<1; i++){
    fw=fopen("Receipt.txt", "a+");
    fprintf(fw, "%d\t\t%s\t%s    %d\t   %d\t    %d\t\t  RM %.2f\n"
                ,cust[i].receiptno, cust[i].nasiAyam,cust[i].type, cust[i].no_addon1
                ,cust[i].no_addon2, cust[i].no_addon3, cust[i].initial_price);
    fclose(fw);
    }
}

void total_price (struct Customer cust[], FILE *);
void total_price (struct Customer cust[1000], FILE *ft){
    int i;

    for (i=0; i<1; i++){
        ft=fopen("Receipt.txt", "a+");
        fprintf(ft,"\t\t\t\t\t\t\t\t\t   Total: RM%.2f\n", cust[i].initial_price);
        fclose(ft);
    }
}


int main()
{
    int option;
    struct Customer cust[1000];
    FILE *fw;
    FILE *fa;
    FILE *ft;

    fa= fopen("Receipt.txt","w");
    fprintf(fa, "\t\t\t\t\t\t      Extra\n");
    fprintf(fa, "___________________________________________________________________________________________\n");
    fprintf(fa, "Receipt No.\t Chicken Rice\t\t Type\t  Liver\tGizzard\t   Egg\t\t Amount(RM)\t\n");
    fclose(fa);

    do {
        display_title();            // menu
        get_nasiAyam(cust);         // base price
        get_type(cust);             // type either regular or special
        get_addon(cust);            // add-on
        get_extra_addon(cust);      // extra add-on
//        get_new_customer(cust);     // new customer

        receipt (cust, fw);         // receipt file
        total_price (cust, ft);     // receipt total part
//        get_new_customer(cust);

        fflush(stdin);
        printf("\n\n\nEnter 0 to (EXIT), Else enter any number proceed to the next customer: ");
        scanf("%d", &option);
        printf("\n");
        system("cls");
    } while (option != 0);

    return 0;
}
