#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,root1,root2;
	printf("ENTER THE VALUES OF a,b,c");
	scanf("%f%f%f",&a,&b,&c);
	d=(b*b)-(4*a*c);
	if(d>0)
	{
		printf("ROOTS ARE REAL & DISTINCT \n");
		root1=(-b+sqrt(d))/(2*a);
		root2=(-b-sqrt(d))/(2*a);
		printf("root1=%f\n",root1);
		printf("root2=%f\n",root2);
	}
	else if(d==0)
	{
		printf("ROOTS ARE REAL & EQUAL");
		root1=(b/2*a);
		root2=root1;
		printf("root1=%f\n",root1);
		printf("root2=%f\n",root2);
	}
	else(d<0);
	printf("ROOTS ARE IMAGINARY");
	return 0;
}
