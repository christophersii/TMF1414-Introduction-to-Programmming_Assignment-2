#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include <ctype.h>




float menu();
float steamchicken();
float roastedchicken();
float currychicken();
float friedchicken();
float total();
float all_total();
float complete_total();
float neworder();

int customerid=1;
unsigned int answer=1;
char x;
int y,t,r,w,z;
float schick,rchick,cchick,fchick;
float t_schick,t_rchick,t_cchick,t_fchick;
float total1,all_total1;

main(){
	printf ("\t\t\t\t\tWelcome to My Chicken Rice Stall\n");
	menu();
}

float menu(){
	char x;

        printf("\t _______________________________________________________________________________________________\n");
        printf("\t|\t\t\t\t\tChicken Rice Menu\t\t\t\t\t|\n");
        printf("\t|_______________________________________________________________________________________________|\n");
        printf("\t|\tPackage\t\t |   Regular(R)\t  |\tSpecial(S)    |\t\t  Extra(RM)\t\t|\n");
        printf("\t|\t\t\t |      (RM)\t  |\t  (RM)\t      |\t\t\t\t\t|\n");
        printf("\t|________________________|________________|___________________|_________________________________|\n");
        printf("\t|a) Steam Chicken Rice \t |      8.50\t  |\t 10.00\t      |\t\t\t\t\t|\n");
        printf("\t|________________________|________________|___________________|\t\t\t\t\t|\n");
        printf("\t|b) Roasted Chicken Rice |      8.50\t  |\t 10.00\t      |\t     Liver/ 1.00 each\t\t|\n");
        printf("\t|________________________|________________|___________________|\t\t\t\t\t|\n");
        printf("\t|c) Curry Chicken Rice\t |      9.50\t  |\t 11.00\t      |\t     Gizzard/ 1.20 each\t\t|\n");
        printf("\t|________________________|________________|___________________|\t\t\t\t\t|\n");
        printf("\t|d) Fried Chicken Rice\t |      8.50\t  |\t 10.00\t      |\t     Egg/ 1.50 each\t\t|\n");
        printf("\t|________________________|________________|___________________|_________________________________|\n");
        printf("\t|Options:\t\t\t\t\t\t\t\t\t\t\t|\n");
        printf("\t|Add Extra: Liver/ Gizzard/ Egg\t\t\t\t\t\t\t\t\t|\n");
        printf("\t|_______________________________________________________________________________________________|\n");

        printf ("\nPlease select your option from above menu: ");
		
		scanf ("%c",&x);
        

            switch (x)
            {
                case 'a': steamchicken();
            	break;

                case 'b': roastedchicken();
            	break;

                case 'c': currychicken();
            	break;

                case 'd': friedchicken();
            	break;

                case 'e': exit(0);
            	break;
	
	            default: printf ("Invalid Error\n");
			}
}

float steamchicken(){
	printf ("You have selected Steam Chicken Rice.\n\nPlease choose (1-Regular | 2-special): ");
	scanf ("%d", &y);

	if (y==2){
		schick=10.00;
		printf ("Steam Chicken Rice (Special)- RM10.00");
		}
	else if (y==1){
		schick=8.50;
		printf ("Steam Chicken Rice (Regular)- RM8.50");
		}
	else {
		printf ("\nInvalid input.");
		}
	
	printf ("\n\nDo you want to add extra? (1- Liver RM1/each) | (2- Gizzard RM1.20/each) | (3- Egg RM1.50/each) | (4- No): ");
	scanf ("%d", &r);

		if (r==1){
			t_schick=schick+1.00;
			all_total();
			}
		else if (r==2){
			t_schick=schick+1.20;
			all_total();
			}
		else if (r==3){
			t_schick=schick+1.50;
			all_total();
			}
		else {
			t_schick=schick+0.00;
			all_total();
			}
}


float roastedchicken(){
	printf ("You have selected Roasted Chicken Rice.\n");
	printf ("\nPlease choose (1-Regular | 2-Special): ");
	scanf ("%d", &y);

	if (y==2){
		rchick=10.00;
		printf ("Roasted Chicken Rice (Special)- RM10.00");
		}
	else if (y==1){
		rchick=8.50;
		printf ("Roasted Chicken Rice (Regular)- RM8.50");
		}
	else {
		printf ("\nInvalid input.");
		}
		
	printf ("\n\nDo you want to add extra? (1- Liver RM1/each) | (2- Gizzard RM1.20/each) | (3- Egg RM1.50/each) | (4- No): ");
	scanf ("%d",&r);

		if (r==1){
			t_rchick=rchick+1.00;
			all_total();
			}
		else if (r==2){
			t_rchick=rchick+1.20;
			all_total();
			}
		else if (r==3){
			t_rchick=rchick+1.50;
			all_total();
			}
		else {
			t_rchick=rchick+0.00;
			all_total();
			}
			
}

float currychicken(){
	printf ("You have selected Curry Chicken Rice.\n");
	printf ("\nPlease choose (1-Regular | 2-Special) :");
	scanf ("%d", &y);

	if (y==2){
		cchick=11.00;
		printf ("Curry Chicken Rice (Special)- RM11.00");
		}
	else if (y==1){
		cchick=9.50;
		printf ("Curry Chicken Rice (Regular)- RM9.50");
		}
	else {
		printf ("\nInvalid input.");
		}

	printf ("\n\nDo you want to add extra? (1- Liver RM1/each) | (2- Gizzard RM1.20/each) | (3- Egg RM1.50/each) | (4- No): ");
	scanf ("%d",&r);

		if (r==1){
			t_cchick=cchick+1.00;
			all_total();
			}
		else if (r==2){
			t_cchick=cchick+1.20;
			all_total();
			}
		else if (r==3){
			t_cchick=cchick+1.50;
			all_total();
		}
		else {
			t_cchick=cchick+0.00;
			all_total();
		}
}

float friedchicken(){
	printf ("You have selected Fried Chicken Rice.\n");
	printf ("\nPlease choose (1-Regular | 2-Special) :");
	scanf ("%d", &y);

	if (y==2){
		fchick=10.00;
		printf ("Fried Chicken Rice (Special)- RM10.00");
		}
	else if (y==1){
		fchick=8.50;
		printf ("Fried Chicken Rice (Special)- RM8.50");
		}
	else {
		printf ("\nInvalid input.");
		}

	printf ("\n\nDo you want to add extra? (1- Liver RM1/each) | (2- Gizzard RM1.20/each) | (3- Egg RM1.50/each) | (4- No): ");
	scanf ("%d",&r);

		if (r==1){
			t_fchick=fchick+1.00;
			all_total();
			}
		else if (r==2){
			t_fchick=fchick+1.20;
			all_total();
		}
		else if (r==3){
			t_fchick=fchick+1.50;
			all_total();
		}
		else {
			t_fchick=fchick+0.00;
			all_total();
		}
}

float all_total(){
	total1 += (t_schick+t_rchick+t_cchick+t_fchick);
	printf ("\n\nThe total is RM%.2f\n", total1);
	neworder();
	
}

float neworder(){
	printf ("\n\n\n______________________________\n");
	printf ("Continue order? (1-Yes | 0-No)");
	scanf ("%d", &answer);
	
	do {
		{
			system ("cls");
			
			printf ("Customer No: %d\n", customerid);
			
			menu();
			++customerid;
		}
	} while (answer != 0);
	
	system ("cls");
	exit(0);
	
	return 0;
}

