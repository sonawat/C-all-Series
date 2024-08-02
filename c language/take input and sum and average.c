/* Write a Program to take 2 Input Values as Input 
From user and Find their Sum And Average*/

#include<stdio.h>
#include<conio.h>
int main()
{n
	float x,y;
	int s,a;
	printf("Please Enter Any Number");
	scanf("%f",&x);
	printf("Please Enter Second Number");
	scanf("%f",&y);
	s = x+y;
	a = (x+y)/2;
//	printf("\n The Input Value is : %d \n",s);
//	printf("\n The Input Value is : %d \n",a);

printf("\n The Input Value is : %.2f\n",x+y);
printf("\n The Input Value is : %.2f\n",(x+y)/2);
} 
