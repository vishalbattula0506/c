#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,s,area;
	printf("enter a,b,c values:");
	scanf("%f%f%f",&a,&b,&c);
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("area of triangle is :%f",area);
	return 0;
}
