#include<stdio.h>
#include<conio.h>

int main()
{
	int x,y,i,s=0;
		printf("Enter Starting Number");
	scanf("%d",&x);	
	printf("Enter Ending Number ");
	scanf("%d",&y);
	
	for(i=1;i<=x;i++)
	{
		s = s+y;
	}
	printf("\n%d",s);	
}
