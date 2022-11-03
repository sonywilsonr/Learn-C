#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b,c;
	setbuf(stdout,NULL);
	printf("enter two numbers: ");
	scanf("%d%d",&a,&b);
	printf("entered numbers are: %d,%d\n\n",a,b);
	c=a+b;
	printf("sum= %d+%d = %d",a,b,c);
	return EXIT_SUCCESS;
}
