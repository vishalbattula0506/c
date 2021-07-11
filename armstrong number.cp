#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int num,r,sum=0,n;
	printf("ENTER A NUMBER:");
	scanf("%d",&num);
	n=num;
	while(n>0)
	{
		r=n%10;
		sum+=pow(r,3);
		n=n/10;
	}	
	if(sum==num)
	printf("\n %d is an ARMSTRONG NUMBER",num);
	else
	printf("\n %d is an NOT AN ARMSTRONG NUMBER",num);
	return 0;
}
