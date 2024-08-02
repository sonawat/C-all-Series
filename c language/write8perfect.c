#include<stdio.h>
int main()
{
int x,i,j,n,s=0;

printf("Enter Any Number");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
	for(j=1;j<=i/2;j++)
	{
	if(i%j==0)
	{
	s=s+j;
	}
	}
	if(s==i)
{
printf("%d \n",i);
}
	s=0;

}
}

