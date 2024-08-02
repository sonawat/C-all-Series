#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i,x=0;
	
	printf("Enter Any Number : \n");
	scanf("%d",&n);
	
	for(i=2;i<=n-1 ;i++)
	{
		if(n%i==0)
		{
			printf("%d is not Prime Number : ",n);
			break;
		}
		else
		{	
			printf("%d is Prime Number : ",n);
			break;
		}
	}
}
