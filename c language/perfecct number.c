#include<stdio.h>
int main()
{
int x,i,j,n,s=0;

printf("Enter Any Number");
scanf("%d",&n);


for(i=1;i<=n/2;i++)
{
	if(n%i==0)
	{
	s = s+i;
	}
}
if(s==n)
{
	printf("\n This is Perfect Number : %d",n);
}
else
{
	printf("\n This is Not Perfect Number : %d",n);
}
}
