#include<stdio.h>
#include<conio.h>

int main()
{
	float x,y;
	
	printf("Enter Temperature From Celsius :");
	scanf("%f",&x);

printf("\n %.2f Degrees Calsius = %.3f Degrees Fahrenheit:",x,((x*9/5)+32));	
	
printf("\n %.2f Degrees Calsius = %.3f Degrees Kelvin:",x,(x+273.15));	
	

}
