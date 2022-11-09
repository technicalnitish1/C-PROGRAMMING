/*1.	Write a program to print discount over 1000 items:*/
#include<stdio.h>
int main()
{
	int quantity, discount;
	float rate, total;
	printf("Enter the quantity:");
	scanf("%d", &quantity);
	printf("Enter the rate:");
	scanf("%f", &rate);
	if(quantity>1000)
	discount=10;
	else
	discount=0;
	total=(quantity*rate);
	printf("Total before discount:%f\n", total );
	discount=(total-total*0.1);
	printf("Total after discount: %d", discount);
	return 0;
}

