#include<stdio.h>
#include<conio.h>

int main()
{
	int i,n,a,d,j;
	printf("Enter Starting Number :");
	scanf("%d",&a);
	printf("Enter Difference :");
	scanf("%d",&d);
	for(i=0;i<=10;i++)
	{
	
	 	printf("1/%d\t",a+i*d);
	}
	
	printf("\n Enter N th Number");
	scanf("%d",&n);
	
	
		printf("\n N th pad \n");
				
	n = n-1;			
	printf("\n 1/%d",(a+(n-1))*d);
	
	printf("\n N th pad Ka Yog \n");
	
	j = (n/2)*2*a+(n-1)*d;
	printf("\n%d",j);
}
