#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[100],i,n,temp,j;
	setbuf(stdout,NULL);
	printf("enter the array limit= ");
	scanf("%d",&n);
	printf("enter the values of array= ");
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("sorted values are= ");
	for(i=0;i<n;i++){
		printf("%d",a[i]);
		}
	return EXIT_SUCCESS;
}

