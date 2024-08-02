#include<stdio.h>
int main()
{
	int n,i,j,p=65;
	
	printf("Enter Any Number");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
	
	for(j=1;j<=i;j++)
	{
	printf("%c\t",p);
	if(p>89)
	{
		p=65;
	}
	else
	{
	p++;
	}
	}
	
	printf("\n\n");
	}
}
