#include<stdio.h>
main()
{
	float c,f,cel,faren;
	printf("ENTER THE CELSIUS VALUE");
	scanf("%f",&c);
	faren=(c*1.8)+32;
	printf("THE EQUIVALENT FAHRENHEIT TEMPERATURE IS :%2f",faren);
	printf("\n ENTER THE FAHRENHEIT VALUE");
	scanf("%f",&f);
	cel=(f-32)/1.8;
	printf("THE EQUIVALENT CELSIUS TEMPERATURE IS :%2f",cel);
}
