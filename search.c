#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[100],i,n,search_key,flag=0;
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
	printf("\nenter search key= ");
	scanf("%d",&search_key);
	for(i=0;i<n;i++){
		if(search_key==a[i]){
			flag=1;
			break;
		}
	}
	if(flag==1){
		printf("value found at position %d",i+1);
	}
	else{
		printf("value not found");
	}
	return EXIT_SUCCESS;
}
