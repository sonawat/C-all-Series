#include<stdio.h>
#include<conio.h>

int main()
{
	int x,y,i,s=1,r=1,f=1,j=1;
		printf("Enter Starting Number");
	scanf("%d",&x);	
	printf("Enter Ending Number ");
	scanf("%d",&y);
	
	for(i=1;i<=y;i++)
	{
		s = s*x;
	}
	printf("\n\n %d ki power %d  : %d ",x,y,s);
	
		for(i=1;i<=x;i++)
	{
		r = r*y;
	}
	printf("\n\n %d ki power %d  : %d ",y,x,r);
	
	for(i=1;i<=x;i++)
	{
		f = f*x;
	}
	printf("\n\n %d ki power %d  : %d ",x,x,f);
	
	for(i=1;i<=y;i++)
	{
		j = j*y;
	}
		printf("\n\n %d ki power %d  : %d ",y,y,j);
}
