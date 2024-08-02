#include<stdio.h>
#include<conio.h>

int main()
{
	float x,y;
	
	printf("Enter radius  :");
	scanf("%f",&x);
	
	y = (float)4/3*(float)22/7*x*x*x;
	printf("The Volume of sphere is %d  :",y);	
}
