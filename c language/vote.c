#include<stdio.h>
#include<conio.h>

int main()
{
	int  x,y;
	printf("Enter your Age \n");
	scanf("%d",&x);
	
	if(x>0 && x<18)
	{
		printf("You are Minor \n");
		printf("You Are not Eligible for vote\n");
	}
	else if(x>18 && x<65)
	{
		printf("You are Adult \n");
		printf("You Are Eligible for vote\n");
	}
		else
	{
		printf("You are Seniors \n");
		printf("You Are Eligible for vote\n");
	}	
	
	
	
}
