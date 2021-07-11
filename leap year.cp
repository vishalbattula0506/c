#include<stdio.h>
int main()
{
	int year;
	printf("ENTER A YEAR: ");
	scanf("%d",&year);
	if(year%400==0)
	printf("%d is A LEAP YEAR \n",year);
	else if(year%100==0)
	printf("%d is NOT A LEAP YEAR \n",year);
	else if(year%4==0)
	printf("%d is A LEAP YEAR \n",year);
	else
	printf("%d is NOT A LEAP YEAR \n",year);
	return 0;
}
