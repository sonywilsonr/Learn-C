#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b,choice,result;
	setbuf(stdout,NULL);
	printf("enter two numbers= ");
	scanf("%d%d",&a,&b);
	printf(" 1 for addition\n 2 for subtraction\n 3 for multiplication\n 4 for division\n\n Enter your choice= ");
	scanf("%d",&choice);
	if(choice==1){
		result=a+b;
		printf("result=%d",result);
	}
	else if(choice==2){
		result=a-b;
		printf("result=%d",result);
	}
	else if(choice==3){
			result=a*b;
			printf("result=%d",result);
		}
	else if(choice==4){
			result=a/b;
			printf("result=%d",result);
		}
	else{
		printf("no more choices");
	}

	return EXIT_SUCCESS;
}
