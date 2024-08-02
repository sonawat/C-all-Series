#include<stdio.h>
#include<conio.h>

int main()
{
	float x,y;
	
	printf("Enter length in  Meter :");
	scanf("%f",&x);
	y = x*100;
	printf("\n %.2f Meter = %.3f Centimeter:",x,y);	
	//	y = x*100;
	//printf("\n %f Meter = %.3f Centimeter:",y);	
	//printf("\n Centimeter %.2f:",x*100);	
	//printf("\n Kelometer %.2f:",x/1000);
	//printf("\n Feet %.2f:",x*3.28084);
	//printf("\n Feet %.2f:",x*39.37);
}
