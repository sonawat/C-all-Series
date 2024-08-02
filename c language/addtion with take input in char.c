#include<stdio.h>
#include<conio.h>

int main()
{
	int x,y,a;
	char z;
		printf("\nFor + Press A");
	printf("\nFor - Press B");
	printf("\nFor * Press C");
	printf("\nFor / Press D\n");
	scanf("%c",&z);
	
	printf("\nEnter Three Number");
		scanf("%d%d",&x,&y);

	if(z=='A'||z=='a')
	{
		a = x+y;
		printf("%d + %d = %d ",x,y,a);
	}
	else if(z=='B'||z=='b')
	{
		a = x-y;
		printf("%d - %d = %d ",x,y,a);
	}
		else if(z=='C'||z=='c')
	{
		a = x*y;
		printf("%d * %d = %d ",x,y,a);
	}
	else if(z=='D'||z=='d')
	{
		a = x/y;
		printf("%d / %d = %d ",x,y,a);
	}
	else
	{
		printf("Enter Correct Input");
	}
}
