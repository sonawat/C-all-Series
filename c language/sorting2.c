#include<stdio.h>
#include<conio.h>

int main()
{
	int i,x,a,j;
	int num[20];
	
	for(i = 0; i< 5; i++)
	{
	printf("Enter %d value => ",i+1);
	scanf("%d",&num[i]);
	}
	printf("\n Before Short The List\n");
	
	for(i = 0; i< 5; i++)
	{
	printf(" %d, ",num[i]);
	}
	
	// Code of Shorting
	
	for(i=0;i<5;i++)
	{
		for(j= i+1;j<5;j++)	
		{
			if(num[i]>num[j])	
			{
			a = num[i];
			num[i] = num[j];
			num[j] = a;
			}
		}
	}
	
	printf("\n After Short The List\n");
	
	for(i = 0; i< 5; i++)
	{
	printf(" %d, ",num[i]);
	}
}
