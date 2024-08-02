#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b,i,s=1,j,n,y=0,p=1,q;
	printf("Enter Starting Number");
	scanf("%d",&a);
	printf("Enter distance");
	scanf("%d",&b);
	
	printf("ArithMetic Progress :\n\n");
	for(i=0;i<=10;i++)
	{
		for(j=1;j<=i;j++)
		{
		 s = s*b;	
		}
	printf("%d\t",(a*s));
	s=1;
		}
		
	printf("\nEnter N Pad Ki Value");
	scanf("%d",&n);		
		
		
	for(i=1;i<=(n-1);i++)
	{
	
	s =	s*b;
	
	}
	printf("%d",s*a);
	
	
	printf("\n\nRatio range In N pado Ka Yog :\n\n");
	printf("AApko Kitne Pado Ka Yog Cahhie \n");
	scanf("%d",&q);
	for(i=0;i<=q-1;i++)
	{
		for(j=1;j<=i;j++)
		{
		 p = p*b;	
		}
	y = y + (a*p);
		
	p=1;
		}
		printf("%d\t",y);
	
}
