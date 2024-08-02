#include<stdio.h>
#include<conio.h>

int main()
{
	int x;
	printf("Enter any Number\n");
	scanf("%d",&x);
	
	if(x%2==0)
	{
	 printf("%d is Even\n",x);
	}
	else
	{
		printf("%d is odd \n",x);
	}
}
