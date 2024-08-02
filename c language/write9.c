#include<stdio.h>
int main()
{
	int n,i,j,p=1;
	
	printf("Enter Any Number");
	scanf("%d",&n);
	
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=i;j++)
		{
		printf("%d\t",p);
		p++;
		}
		printf("\n\n");
	}
}
