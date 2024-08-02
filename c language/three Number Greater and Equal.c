#include<stdio.h>
#include<conio.h>

int main()
{
	int x,y,z;
	printf("Enter Three Number");
	scanf("%d%d%d",&x,&y,&z);
	
	if(x>y&&x>z)
	{
		printf("%d is Greater ",x);
	}
	else if(y>x&&y>z)
	{
		printf("&d is Greater ",y);
	}
	else if(z>x&&z>y)
	{
		printf("%d is Greater ",z);
	}
	else
	{
	printf("both Are Equal");	
	}
	
}

