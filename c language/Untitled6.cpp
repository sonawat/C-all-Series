#include<stdio.h>
#include<conio.h>

int main()
{
int i,n,j,c=0;;

	printf("Enter Any Number");
	scanf("%d",&n);
	
	while(n!=0)
	{
	n = n/10;
	c++;
	}
	printf("\n The Number is: %d",c);
}
