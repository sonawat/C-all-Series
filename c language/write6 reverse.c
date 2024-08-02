#include<stdio.h>

int main()
{
	int x=0,n,s,t;
	
	printf("Enter Any Number \n");
	scanf("%d",&n);
	t = n;
	while(n!=0)
	{
		s = n%10;
		x=x*10+s;
		n = n/10;
	}
	printf("%d",x);
	
	if(t==x)
	{
		printf("This is Palindrome Number");
	}
	else
	{
		printf("This is Not Palindrome Number");
	}
}
