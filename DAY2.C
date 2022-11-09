/* 2.	Write a program to find the area of triangle:*/
#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,s,area;
	printf("Enter the value of first side:");
	scanf("%f", &a);
	printf("Enter the value of second side:");
	scanf("%f", &b);
	printf("Enter the value of third side:");
	scanf("%f", &c);
	s=(a+b+c)/2;
	printf("Semiperimeter: %f\n", s);
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Area: %f", area);
	return 0;
