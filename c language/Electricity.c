#include<stdio.h>
#include<conio.h>

int main()
{
	float x,b;
	printf("\nEnter Electricity Unit");
	scanf("%f",&x);
	
	if(x<=50 && x>0)
	{
		b = (x*1.50);
		printf("\n Unit Charge is %f",b);
	}
	else if(x>50 && x<=100)
	{
		b = (x*2.75);
		printf("\n Unit Charge is %f",b);
	}
		else if(x>100 && x<=250)
	{
		b = (x*2.75);
		printf("\n Unit Charge is %f",b);
	}
	
	
}
