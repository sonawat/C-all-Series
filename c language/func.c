#include<stdio.h>

int main()
{
	int n,i,j,r,p;
	printf("Enter Any Number");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("%d :",i);
		p=i;
		while(p!=0)
		{
			r=p%10;
			p = p/10;
			printf("%d,",r);
		}
		
		printf("\n");
	}
}
