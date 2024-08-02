#include<stdio.h>
#include<conio.h>

int main()
{
	int x,y,z,n,i,j,s=0,c=0;
	printf("Enter Series End Number");
	scanf("%d",&n);
	printf("Enter any one divisibal Number");
	scanf("%d",&x);
	
	for(i=1;i<=n;i++)
	{
		if(i%x==0)
		{
			printf("%d\n",i);
			s = s + i;
			c++;
		}
	}		
	printf("\nSum is : %d",s);
	printf("\nCount is : %d",c);
	printf("\nAvg is : %d",s/c);
}
	
	
