#include<stdio.h>
#include<conio.h>

int main()
{
int i,x,s=1,j;
	printf("Enter Any Number");
	scanf("%d",&x);
	
	for(i=1;i<=x;i++)
	{
		printf("\n");
	for(j=1;j<=i;j++)
	{
		printf("%d*",j);
	}	
		//s = s * i;
		//printf("\n%d ke fectorial ke man : %d",i,s);
	}

}
