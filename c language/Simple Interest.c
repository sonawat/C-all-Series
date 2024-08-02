//Hours To Minit And Second Converter

#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y,z;
	printf("\n Enter Principle ");
	scanf("%d",&x);
	printf("\n Enter Rate ");
	scanf("%d",&y);
	printf("\n Enter Time ");
	scanf("%d",&z);
	 
		printf("\n Simple Interest Is %d ",((x*y*z)/100));
		printf("\n Total Amount is %d ",((x*y*z)/100+x));
}
