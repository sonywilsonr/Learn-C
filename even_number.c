#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,i;
	setbuf(stdout,NULL);
	printf("enter the limit= ");
	scanf("%d",&n);
	printf("even numbers are ");
	for(i=2;i<=n;i++){
		if(i%2==0){
			printf(" %d",i);
		}
	}
	return EXIT_SUCCESS;
}
