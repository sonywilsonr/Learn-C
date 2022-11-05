#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,i;
	setbuf(stdout,NULL);
	printf("enter the limit= ");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		printf("%d\t",i);
	}
	return EXIT_SUCCESS;
}

