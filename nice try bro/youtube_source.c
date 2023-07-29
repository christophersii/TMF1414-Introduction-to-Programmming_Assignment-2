#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>


void menu();
float lunchdinner();
float breakfast();
float kiddies();
float promotion();
float drink();
float frenchfries();
float dessert();
float total();
float totaldinein();
float totaltakeout();
void  login();


int x,r,t,w,z;
float land ,land1, buff ,kid ,pro ,din ,fren ,dess ;
float total1;

main()
{
    printf("    Welcome to UCTI/APIIT Fast Food Restaurant\n");
    menu();
}



void menu()                                                             //This functions is for selecting the items from the menu list.
{

    int x;

    //Menu
    printf("No.     Item                Price       Remark\n");
    printf("1       Lunch/Dinner Set    RM8.00      1 Burger/chicken\n");
    printf("                                        1 drink(medium)\n");
    printf("                                        1 French fries\n\n");
    printf("2       Breakfast Set       RM5.00      1 breakfast\n");
    printf("                                        1 drink(medium)\n\n");
    printf("3       Kiddies Set         RM6.00      1 burger/chicken\n");
    printf("                                        1 drink(small)\n");
    printf("                                        1 French fries(small)\n\n");
    printf("4       Promotion           RM3.00      Burger/Chicken\n\n");
    printf("5       Drink               RM2.00      Medium size\n\n");
    printf("6       French Fries        RM3.00      Medium size\n\n");
    printf("7       Dessert             RM3.50      Ice cream/pie/cake\n\n");
    printf("8       Display Total \n\n");
    printf("9       End\n\n");
    printf("Please Select Your Option from Above Menu : ");
    scanf("%d",&x);



    switch(x)
    {
    case 1: lunchdinner();
            break;

    case 2: breakfast();
            break;

    case 3: kiddies();
            break;

    case 4: promotion();
            break;

    case 5: drink();
            break;

    case 6: frenchfries();
            break;

    case 7: dessert();
            break;

    case 8: total();
            break;

    case 9: exit(0);

    default: printf("Invalid Error!\n");

    }

}

float lunchdinner()
{



    printf("You have selected Lunch/Dinner Set.");
    printf("\nPlease Enter your Quantity :");
    scanf("%d",&x);

    land=x*8.00;

    printf("Do you want to add-on?(1-Yes, 2-No)");
    scanf("%d",&r);

    if (r==1)
    {   system("cls");                                  //clear screen.
        {menu();}
    }

    else
    {total();}


}

float breakfast()
{



    printf("You have selected Breakfast Set.");
    printf("\nPlease Enter your Quantity :");
    scanf("%d",&x);

    buff = x*5.00;

    printf("Do you want to add-on?(1-Yes, 2-No)");
    scanf("%d",&r);

    if (r==1)
    {   system("cls");
        {menu();}
    }
    else
    {total();}





}
float kiddies()
{


    printf("You have selected Kiddies Set.");
    printf("\nPlease Enter your Quantity :");
    scanf("%d",&x);

    kid = x*6.00;

    printf("Do you want to add-on?(1-Yes, 2-No)");
    scanf("%d",&r);

    if (r==1)
    {   system("cls");
        {menu();}
    }
    else
    {total();}




}
float promotion()
{


    printf("You have selected Promotion.");
    printf("\nPlease Enter your Quantity :");
    scanf("%d",&x);

    pro = x*3.00;

    printf("Do you want to add-on?(1-Yes, 2-No)");
    scanf("%d",&r);

    if (r==1)
    {   system("cls");
        {menu();}
    }
    else
    {total();}




}
float drink()
{


    printf("You have selected to order Drink.");
    printf("\nPlease Enter your Quantity :");
    scanf("%d",&x);

    din = x*2.00;

    printf("Do you want to add-on?(1-Yes, 2-No)");
    scanf("%d",&r);

    if (r==1)
    {   system("cls");
        {menu();}
    }
    else
    {total();}




}
float frenchfries()
{


    printf("You have selected French Fries.");
    printf("\nPlease Enter your Quantity :");
    scanf("%d",&x);

    fren = x*3.00 ;

    printf("Do you want to add-on?(1-Yes, 2-No)");
    scanf("%d",&r);

    if (r==1)
    {   system("cls");
        {menu();}
    }
    else
    {total();}




}
float dessert()
{


    printf("You have selected Dessert.");
    printf("\nPlease Enter your Quantity :");
    scanf("%d",&x);

    dess = x*3.50 ;

    printf("Do you want to add-on?(1-Yes, 2-No)");
    scanf("%d",&r);

    if (r==1)
    {   system("cls");
        {menu();}
    }
    else
    {total();}






}



float total()                                                           //Food Menu Calculations.
{
    printf("Do you want to dine in or take away?\n");
    printf("1) Dine In 2) Take Away\n");
    scanf("%d",&w);

    switch(w)

    {
    case 1: totaldinein();
            break;

    case 2: totaltakeout();
            break;

    default: system("cls");
             printf("\n\nInvalid Error!\n");
    }



}


float totaldinein()                                                         //This function is to calculate the total price of DINING IN including the 5% government tax and 10% dining in charges.


{
    system("cls");
    printf("Select your payment method:1--> Cash Payment     2--> Credit Card Payment\n");
    scanf("%d",&t);

    switch (t)
    {
    case 1: total1 += (land + buff + kid + pro + din + fren + dess)*1.15;                   //Calculation for grand total with government taxes,and cash payment.

            printf("\nThe Total is RM%.2f\n\n",total1);

            break;

    case 2: total1 += (land + buff + kid + pro + din + fren + dess)*1.18;                   //Calculation for grand total with government taxes,and credit card payment.

            printf("\nThe Total is RM%.2f\n\n",total1);

            break;

    default: system("cls");
             printf("\nInvalid Error");
    }




}

float totaltakeout()                                                        //This function is to calculate the  total price of TAKE AWAY including the 5% government tax and 5% dining in charges.

{
    system("cls");
    printf("Select your payment method:1--> Cash Payment     2--> Credit Card Payment\n");
    scanf("%d",&t);

    switch (t)
    {
        case 1: total1 += (land + buff + kid + pro + din + fren + dess)*1.10;               //Calculation for grand total with government taxes,and cash payment.

                printf("The Total is RM%.2f\n\n",total1);

                break;

        case 2: total1 += (land + buff + kid + pro + din + fren + dess)*1.13;               //Calculation for grand total with government taxes,and credit card payment.

                printf("The Total is RM%.2f\n\n",total1);

                break;

        default: system("cls");
                 printf("\nInvalid Error");

    }
}
