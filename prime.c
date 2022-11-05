#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,i,flag=0;
	setbuf(stdout,NULL);
	printf("enter a number= ");
	scanf("%d",&n);
	for(i=0;i<=n/2;i++){
		if(n%i==0){
			flag=1;
			break;
		}
	}
	if(flag==0){
		printf("entered number is PRIME");
	}
	else{
		printf("entered number is NOT PRIME");
	}
	return EXIT_SUCCESS;
}
