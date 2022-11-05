#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,rows,j;
	setbuf(stdout,NULL);
	printf("number of rows= ");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++){
		for(j=0;j<i;j++){
			printf("*");
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
