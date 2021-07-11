#include<stdio.h>

main()
{
	int a,b,c,big;
	printf("ENTER THREE NUMBERS");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
		big=a;
	else if(b>c && b>a)
		big=b;
	else
		big=c;
	printf("THE BIGGEST NUMBER IS %d",big);
}
