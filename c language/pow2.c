#include<stdio.h>
#include<conio.h>

int main()
{
	int x,y,i,z,s=0,c=0,p=0,q=0,r=0,t=0;
	printf("Enter Starting Number");
	scanf("%d",&x);	
	printf("Enter Ending Number ");
	scanf("%d",&y);
	
	if(y<x)
	{
		x = x+y;
		y = x-y;
		x = x-y;
	}
	printf("\n\nSeries is :\n-------------------------------------------\n");
	for(i=x;i<=y;i++)
	{
	 printf("%d\t",i);
	 s=s+i;
	 c++;
	}
	printf("\n\nSum is : %d",s);
	printf("\nCount is : %d",c);
	printf("\n\n Even Number Series is :\n-------------------------------------------\n");
	for(i=x;i<=y;i++)
	{
		if(i%2==0)
		{
	 printf("%d\t",i);
	 p = p+i;
	 q++;
		}
	}
	printf("\n\nSum is : %d",p);
	printf("\nCount is : %d",q);
	printf("\n\n Odd Number Series is :\n-------------------------------------------\n");
	for(i=x;i<=y;i++)
	{
		if(i%2!=0)
		{
	 printf("%d\t",i);
	 r = r+i;
	 t++;
		}
	}
		printf("\n\nSum is : %d",r);
	printf("\nCount is : %d",t);
	
	
}
