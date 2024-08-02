#include<stdio.h>
#include<conio.h>

int main()
{
	int x,y,z,a;
	printf("\nEnter Three Number");
		scanf("%d%d",&x,&y);
	printf("\nFor + Press 1");
	printf("\nFor - Press 2");
	printf("\nFor * Press 3");
	printf("\nFor / Press 4\n");
	scanf("%d",&z);
	
	if(z==1)
	{
		a = x+y;
		printf("%d + %d = %d ",x,y,a);
	}
	else if(z==2)
	{
		a = x-y;
		printf("%d - %d = %d ",x,y,a);
	}
		else if(z==3)
	{
		a = x*y;
		printf("%d * %d = %d ",x,y,a);
	}
	else if(z==4)
	{
		a = x/y;
		printf("%d / %d = %d ",x,y,a);
	}
	else
	{
		printf("Enter Correct Input");
	}
}
