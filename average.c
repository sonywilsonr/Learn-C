#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b,c,d;
	setbuf(stdout,NULL);
	printf("enter three numbers: ");
  
	scanf("%d%d%d",&a,&b,&c);
	printf("entered numbers are: %d,%d,%d\n\n",a,b,c);
  
	d=(a+b+c)/3;
	printf("average=(%d+%d+%d)/3=%d",a,b,c,d);
  
	return EXIT_SUCCESS;
}
