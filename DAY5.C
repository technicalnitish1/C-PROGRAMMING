/*5.	Write a program to find the minimum number of notes to make a total:*/

#include<stdio.h>
int main()
{
	int hundered,fifty,twenty,ten,five,two,one,amount,total;
	printf("Enter the amount:");
	scanf("%d", &amount);
	hundered=amount/100;
	amount=amount%100;
	fifty=amount/50;
	amount=amount%50;
	twenty=amount/20;
	amount=amount%20;
	ten=amount/10;
	amount=amount%10;
	five=amount/5;
	amount=amount%5;
	two=amount/2;
	amount=amount%2;
	one=amount/1;
	amount=amount%1;
	total=hundered+fifty+twenty+ten+five+two+one;
	printf("Total:%d", total);
	return 0;
}
