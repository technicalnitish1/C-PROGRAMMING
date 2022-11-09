/*3.	Write a program to print the reverse of a given number:*/

#include<stdio.h>
int main()
{
	int a,b,c,n;
	long int reverse_number;
	printf("Enter any three values");
	scanf("%d", &n);
	c=n%10;
	n=n/10;
	b=n%10;
	n=n/10;
	a=n%10;
	reverse_number=c*100+b*10+a*1;
	printf("%d", reverse_number);
	return 0;
}
