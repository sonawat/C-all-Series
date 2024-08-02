#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
int i,x,s=1,j;
	printf("Enter Any Number");
	scanf("%d",&x);
	printf("Number \t Squre \t Cube \t SqureRoot\n");
	for(i=1;i<=x;i++)
	{
		printf("%d\t %d\t %d\t %.0f\t\n",i,i*i,i*i*i,sqrt(i));
	}

}
