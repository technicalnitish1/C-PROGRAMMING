/*4.	Write a program to perform +,-,*,/,% together:*/
#include<stdio.h>
int main()
{
	int a,b,c,d,e,g;
	float f;
	printf("Enter any two numbers:");
	scanf("%d %d", &a,&b);
	c=a+b;
	printf("%d\n", c);
	d=a-b;
	printf("%d\n", d);
	e=a*b;
	printf("%d\n", e);
	f=a/b;
	printf("%f\n", f);
	g=a%b;
	printf("%d", g);
	return 0;
}

