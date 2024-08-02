#include<stdio.h>
#include<conio.h>

int main()
{
	int x,p,r,g=0,k;
printf("\nEnter Any Number \n");
scanf("%d",&x);

p = x;
while(p>=0)
{
	r = p%10;
	g = g*10+r;
	p = p/10;
		
	}

	
while(g>=0)
{
	k = g%10;
	g=g/10;
	
	
	switch(k)
	{	
	case 1:
	{
			printf("ONE \t");
			break;
	}
		case 2:
	{
			printf("TWO \t");
			break;
	}
		case 3:
	{
			printf("THREE \t");
			break;
	}
		case 4:
	{
			printf("FOUR \t");
			break;
	}
		case 5:
	{
			printf("FIVE \t");
			break;
	}
		case 6:
	{
			printf("SIX \t");
			break;
	}
		case 7:
	{
			printf("SEVEN \t");
			break;
	}
		case 8:
	{
			printf("EIGHT \t");
			break;
	}
		case 9:
	{
			printf("NINE \t");
			break;
	}
		case 0:
	{
			printf("Zero \t");
			break;
	}
	}
}		
}
