#include<stdio.h>
#include<conio.h>

int main()
{
	int x,i,j,b,r;
	printf("Enter Any Number ");
	scanf("%d",&x);
	
		for(i=1;i<=10;i++)
		{
			for(j=i;j<=x;j++)
			{
				printf("%d\t",i*j);
			}
			printf("\n");
		}
}
