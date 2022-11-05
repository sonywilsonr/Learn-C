#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int choice;
	setbuf(stdout,NULL);
	printf("SELECT\n 1 for Biriyani\n 2 for Mandi\n 3 for Parotta\n 4 for Friedrice\n\nENTER YOUR CHOICE : ");
	scanf("%d",&choice);
	switch(choice){
	case 1:
		printf("you have selected BIRIYANI");
		break;
	case 2:
		printf("you have selected MANDI");
		break;
	case 3:
		printf("you have selected PAROTTA");
		break;
	case 4:
		printf("you have selected FRIEDRICE");
		break;
	default:
		printf("not available");
	}
	return EXIT_SUCCESS;
}
