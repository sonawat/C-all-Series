#include<stdio.h>
#include<conio.h>

int main()
{
	int x,y,i,j;
	printf("End any Number");
	scanf("%d",&y);
	for(i=1;i<=y;i++)
	{
		for(j=1;j<=10;j++)
		{
		printf("%d\t",i*j);
		}
		printf("-------------");
		if(i%10 == 0)
		{
			printf("\n");
		}
	}
}








