#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b=0,c=100;
	
	 printf("How Many Product You want To perches A \n ");
	scanf("%d",&a);
	 printf("If Your Credit ok Enter 0 A \n ");
	scanf("%d",&b);
	
	if(c>=a && b == 0)
	{
	printf("Supply His Requirement");
	}
	else if( b != 0)
	{
	printf("Send him intimation");
	}
	else if(b==0 && c<a)
	{
	printf("Out of order")	;
	}
}

