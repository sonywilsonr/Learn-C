#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[100],i,n;
	setbuf(stdout,NULL);
	printf("enter the array limit= ");
	scanf("%d",&n);
	printf("enter the values of array= ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("entered values are= ");
	for(i=0;i<n;i++){
			printf("%d ",a[i]);
		}
	return EXIT_SUCCESS;
}
