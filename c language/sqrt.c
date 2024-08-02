/* Write a program to take a number from User and Find out their square,
cube and squre root with proper message */

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float x ;
	printf("Please Enter First Number");
	scanf("%f",&x);
	printf("\nYour Number :%.2f",x);
	printf("\n      Squre :%.2f",x*x);
	printf("\n       Cube :%.2f",x*x*x);
	printf("\n       Sqrt :%.2f",sqrt(x));
}
