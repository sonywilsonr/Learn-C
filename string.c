#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char str[100];
	setbuf(stdout,NULL);
	printf("enter your name : ");
	scanf("%s",str);
	printf("your name is %s",str);
	return EXIT_SUCCESS;
}
