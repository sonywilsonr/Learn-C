#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[5],i;
	setbuf(stdout,NULL);
	printf("enter the values of array= ");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	printf("entered values are= ");
	for(i=0;i<5;i++){
			printf("%d ",a[i]);
		}
	return EXIT_SUCCESS;
}
