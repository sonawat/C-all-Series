#include<stdio.h>

int main()
{
	int i,j,n;
	
	printf("Enter Any Number \n");
	scanf("%d",&n);
	
	printf("\n");
	for(i=1;i<=n;i++)
	{	
	printf("%d : ",i); 
	for(j=1;j<=i;j++)
		if(i%j==0)
		{
			if(i==j)
			{
			printf("%d",j);
			}
			else
			{
			printf("%d,",j);
			}
		}
		printf("\n\n");
	}
}
