#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[100],i,n,sum=0;
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
	for(i=0;i<n;i++){
				sum=sum+a[i];
			}
	printf("\nsum= %d",sum);
	return EXIT_SUCCESS;
}
