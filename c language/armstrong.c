#include<stdio.h>
#include<conio.h>

int main()
{
	int x,n,s=0,r;
printf("\nEnter Any Number");
scanf("%d",&x);

n=x;

while(n!=0)
{
	r =n%10;
	s = s+r*r*r;
	n = n/10;
}
if(x==s)
{
	printf("\n %d is Armstrong Number",x);
}
else
{
	printf("\n %d is Not Armstrong Number",x);
}
}
