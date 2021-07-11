#include<stdio.h>
#include<conio.h>
int main()
{
	int flag=0,i,num;
	printf("\n ENTER ANY NUMBER:");
	scanf("%d",&num);
	for(i=2;i<num/2;i++)
	{
		if(num%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
		printf("\n %d is NOT A PRIME NUMBER",num);
	else
		printf("\n %d is A PRIME NUMBER",num);
	return 0;	
		
}
