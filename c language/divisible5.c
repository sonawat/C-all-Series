#include<stdio.h>
#include<conio.h>

int main()
{
	int x;
	printf("Enter any Number\n");
	scanf("%d",&x);
	
	if(x%5==0)
	{
	 printf("%d is Divisible By 5\n",x);
	}
	else
	{
		printf("%d is not Divisible by 5\n",x);
	}
}
