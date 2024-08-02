#include<stdio.h>
#include<conio.h>

int main()
{
	int x,y;
	printf("Enter Two Number");
	scanf("%d%d",&x,&y);
	
	if(x==y)
	{
		printf("%d and %d is Equal",x,y);
	}
	else if(x>y)
	{
		printf("%d is Greater Than  %d ",x,y);
	}
		else
	{
		printf("%d is Greater Than  %d ",y,x);
	}
	
}
