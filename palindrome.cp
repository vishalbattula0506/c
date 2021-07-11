#include<stdio.h>
main()
{
	int num,rem,rev=0,temp;
	printf("ENTER A NUMBER:");
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	if(temp=rev)
	printf("IT IS A PALINDROME");
	else
	printf("IT IS NOT A PALINDROME");
}
