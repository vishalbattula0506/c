#include<stdio.h>
int main()
{
	char op;
	int a,b;
	printf("ENTER AN ARITHEMATIC OPERATOR('+''-''*''/'):");
	scanf("%c",&op);
	printf("ENTER TWO NUMBERS:");
	scanf("%d%d",&a,&b);
	switch(op)
	{
		case'+':
			printf("%d+%d=%d",a,b,a+b);
			break;
		case'-':
			printf("%d-%d=%d",a,b,a-b);
			break;
		case'*':
			printf("%d*%d=%d",a,b,a*b);
			break;
		case'/':
			printf("%d/%d=%d",a,b,a/b);
			break;
		default:
			printf("INVALID OPERATOR");
			break;	
	}
	return 0;
}
