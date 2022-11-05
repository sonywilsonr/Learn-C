#include <stdio.h>
#include <stdlib.h>
int sum();
int main(void) {
	int c;
	c=sum();
	printf("sum= %d",c);
	return 0;
}
int sum(){
	int a,b,c;
	setbuf(stdout,NULL);
	printf("enter two numbers= ");
	scanf("%d%d",&a,&b);
	c=a+b;
	return c;
}
