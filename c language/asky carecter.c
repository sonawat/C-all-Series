#include<stdio.h>
#include<conio.h>

int main()
{
	int x;
	
	printf("Enter any Number:");
	scanf("%d",&x);
	if(x>0&&x<255)
	{
	printf("\n Ascicode is %c \n",x);
	}
	else
	{
	printf("\n Please Enter Correct Inpu ");
	}
}
