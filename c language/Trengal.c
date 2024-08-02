#include<stdio.h>
#include<conio.h>

int main()
{
	int x,y,z,s;
	
	printf("Enter First side of trengle");
	scanf("%d",&x);	
	
	printf("Enter First side of trengle");
	scanf("%d",&y);	
	
	printf("Enter First side of trengle");
	scanf("%d",&z);	
	
	s = x+y+z;
	
	if(s==180)
	{
		if(x==y==z)
		{
		printf("\n this is Equilateral");
		}
		else if(x==y || y==z)
		{
			printf("\n this is Isosceles");
		}
		else
		{
		printf("\n this is Scalene");
		}		
	
	}
	else
	{
		printf("\n This trengle is not valid");
	}
}
