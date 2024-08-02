#include<stdio.h>
#include<conio.h>
int main()
{
	int s,h,d;
	printf("\n Enter The Salary");
	scanf("%d",&s);
	if(s<=10000)
	{ 
	h = s*(float)20/100;
	d = s*(float)80/100;
	s = s+h+d;
	}
	else if(s>=10001 && s<=20000)
	{
	h = s*(float)30/100;
	d = s*(float)95/100;
	s = s+h+d;
	}
	else
	{
	h = s*(float)20/100;
	d = s*(float)80/100;
	s = s+h+d;
	}
	
	printf("\nHousing Rental Allowance %d",h);
	printf("\nHousing Rental Allowance %d",d);
		printf("\nFinal Salary %d",s);	
}
