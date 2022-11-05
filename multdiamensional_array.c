#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[100][100],i,n,j;
	setbuf(stdout,NULL);
	printf("enter the array limit= ");
	scanf("%d",&n);
	printf("enter the values of array= ");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("entered values are \n");
	for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}

	return EXIT_SUCCESS;
}

