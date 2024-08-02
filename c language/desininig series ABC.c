#include<stdio.h>
int main()
{
	int n,i,j,p=65;
	
	printf("Enter Any Number");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		p=65;
	for(j=1;j<=i;j++)
	{
	printf("%c\t",p);
	p++;
	}
	
	printf("\n\n");
	}
}
