#include<stdio.h>
#include<conio.h>

int main()
{
	int x,i;
	printf("Enter Any Number");
	scanf("%d",&x);
	
	for(i=1;i<=x;i++)
	{
		if(i%15 == 0)
		{
			printf("%d\t",i);
		}
	
	}

}
