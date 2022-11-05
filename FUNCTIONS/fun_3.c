#include <stdio.h>
#include <stdlib.h>
int sum(int,int);
int main(void) {
	int a,b,res;
	setbuf(stdout,NULL);
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	res=sum(a,b);
	printf("sum= %d",res);
	return 0;
}
int sum(int num1,int num2){
	int result;
		result=num1+num2;

	return 0;
}
