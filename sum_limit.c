#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,i,sum;
	setbuf(stdout,NULL);
	printf("enter the limit= ");
	scanf("%d",&n);
	printf("numbers before %d = ",n);
	for(i=0;i<n;i++){
		printf("%d\t",i);
	}
	for(i=0;i<n;i++){
			sum=sum+i;
		}
	printf("\n\nsum = %d",sum);

	return EXIT_SUCCESS;
}

