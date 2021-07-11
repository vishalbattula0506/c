#include<stdio.h>
int main()
{
	int n,rem,sum=0;
	printf("ENTER A NUMBER:");
	scanf("%d",&n);
	if(n>0)
	{
		while(n!=0)
		{
			rem=n%10;
			sum+=rem;
			n=n/10;
		}
		printf("SUM OF INDIVIDUAL DIGITS=%d",sum);
	}
	else
	printf("IT IS NOT A POSITIVE INTEGER");
	return 0;
}
