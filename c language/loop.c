#include<stdio.h>
#include<conio.h>

int main()
{
int i = 1,x;
	printf("Enter Any Number");
	scanf("%d",&x);
do
{
	if(i%5==0)
	{
	printf("%d\t\n",i);
	}
	else
	{
	printf("%d\t",i);
	}
	i++;
}
while(i<=x);

		
}
