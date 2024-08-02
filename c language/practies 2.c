#include<stdio.h>
#include<conio.h>

int main()
{
	int x,y,a;
	
	printf("Enter any two Number:");
	scanf("%d%d",&x,&y);
	
	a = x+y;
	printf(" %d + %d = %d ",x,y,a);
	a = x-y;
	printf("\n %d - %d = %d",x,y,a);
	a = x*y;
	printf("\n %d * %d = %d",x,y,a);
	a = x/y;
	printf("\n %d / %d = %d",x,y,a);
}
