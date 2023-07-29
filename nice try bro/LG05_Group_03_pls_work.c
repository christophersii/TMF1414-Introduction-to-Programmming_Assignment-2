#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main () {
	FILE * fMenu;
	FILE * fHeading;
	
	fMenu= fopen ("menu.txt", "r");
	char singleLine [150];
	while (!feof(fMenu)){
		fgets(singleLine,150, fMenu);
		puts( singleLine);
	}
	fclose (fMenu);
	
	
	fHeading = fopen("Receipt.txt","w");
	fprintf (fHeading,"Receipt No.\n");
	fprintf (fHeading,"Chicken Rice\t\tType\tLiver\tGrizzard\tEgg\tAmount (RM)");
	fclose (fHeading);	
	
	
	return 0;
}

