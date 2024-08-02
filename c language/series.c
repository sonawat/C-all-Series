#include<stdio.h>
#include<conio.h>

int main()
{
	int x,i,s=0;
	float avg;
	printf("Enter Any Number");
	scanf("%d",&x);
	
	for(i=1;i<=x;i++)
	{
	
		s = s+i;
		printf("%d\t",i);
		if(i%10==0)
		{
		printf("\n");
		}
	}
	avg = (float)s/x;
	printf("\nTotal Sum is %d",s);
	printf("\n Avg is %.2f",avg);
}
