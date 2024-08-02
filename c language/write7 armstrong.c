#include<stdio.h>
#include<conio.h>

int main()
{
	int x,n,s=0,r,i,p,c=0;
printf("\nEnter Any Number");
scanf("%d",&x);

printf("This Is List Os ArmStrong Number Range From 1 to %d \n",x);
for(i=1;i<=x;i++)
{
	p = i;
	s=0;
while(p!=0)
{	
	r =p%10;
	s = s+r*r*r;
	p = p/10;

}
	if(i==s)
{
	c++;
	printf("\n%d ",i);
}

}
printf("\n Total ArmStrong Number Is : %d",c);
}
