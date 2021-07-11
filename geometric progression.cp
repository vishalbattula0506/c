#include<stdio.h>
#include<math.h>
int main()
{
	int n,x,i,sum=0;
	printf("GEOMENTRIC PROGRESSION \n");
	printf("\n ENTER THE LIMIT:");
	scanf("%d",&n);
	printf("\n ENTER THE VALUE OF x:");
	scanf("%d",&x);
	if(x<0 && n<0)
	{
		printf("ILLEGAL VALUE");
	}
	else
	{
		for(i=0;i<=n;i++)
		sum=sum+pow(x,i);
	}
	printf("sum=%d",sum);
	return 0;
}
