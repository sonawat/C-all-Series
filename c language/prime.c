#include<stdio.h>

int main()
{
	int i,j,c,n;
	
	printf("Enter Any Number");
	scanf("%d",&n);
	
	for(j=1;j<=n;j++)
	{
		c=0;
		for(i=2;i<=j-1;i++)
		{
		if(j%i==0)
		{
			c++;
			break;
		}
		}
		if(c==0)
		{
		printf("%d\t",j);
		}
	}
}
