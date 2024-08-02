#include<stdio.h>
#include<conio.h>

int main()
{
	int x,y,i,j;
	printf("Start Number Table");
	scanf("%d",&x);
	printf("End any Number");
	scanf("%d",&y);
	
if(x>y)
{
	x = x+y;
	y = x-y;
	x = x-y;	
}
	for(i=x;i<=y;i++)
	{
		printf("Table %d\n",i);
		
		for(j=1;j<=10;j++)
		{
		printf("%d*%d = %d\n",i,j,i*j);
		}
	}
}








