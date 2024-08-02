#include<stdio.h>

int main()
{
	int n,r,re,t,s1,s,i;
	
	printf("Enter Any Number \n");
	scanf("%d",&n);

for(i=1;i<=n;i++)
{
t=i;
s=0;
s1=0;
while(t!=0)
{
	re = t%10;
	s = s*10+re;
	s1= s1+re;
	t = t/10;
}
printf("\n %d \t \t \t %d \t\t\t%d",i,s,s1);
}

}
