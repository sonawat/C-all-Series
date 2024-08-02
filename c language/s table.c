#include<stdio.h>
#include<conio.h>

int main()
{
	int x,y,z,a,i,j;
	printf("Enter Any Number");
	scanf("%d",&x);

	for(i=1;i<=x;i++)
	{
		for(j=1;j<=10;j++)
		{
		printf("%d\t",i*j);
		}	
		printf("\n");
	}
}
