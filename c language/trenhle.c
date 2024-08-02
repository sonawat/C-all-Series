#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b,c,s;
	
	printf("Enter First Side of Traingle  \n ");
	scanf("%d",&a);
	
	printf("\n Enter Second Side of Traingle \n ");
	scanf("%d",&b);
	
	printf("\n Enter Third Side of Traingle \n");
	scanf("%d",&c);
	
	
	s = a+b+c;
	if(s==180)
	{
	printf("\n This traingle is Valid because All the angle is Sum 180");
	}
	else
	{
	printf("\n Traingle is not valid Becuse All the Angle is Sum not Equal 180\n And sum is %d",s);
	}
	
}

