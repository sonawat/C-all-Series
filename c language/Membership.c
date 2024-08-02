#include<stdio.h>
#include<conio.h>

int main()
{
	int  x,y,dis,p;
	printf("If Membership Enter 0 and \n Non-Membership Enter 1 \n");
	scanf("%d",&x);
	printf("Enter Your Spending Amount\n");
	scanf("%d",&y);
	if(x==0)
	{
		if(y>100)
		{
			dis = y *(float)10/100;	
			p = 10;
		}
		else
		{
			dis = y *(float)0/100;	
			p =0 ;
		}
	}
	else if(x==1)
	{
		if(y>150)
		{
			dis = y *(float)5/100;	
			p = 5;
		}
		else
		{
			dis = y *(float)0/100;	
			p = 0;
		}
	}
	else
	{
		printf("Plese Enter Correct Input");
	}
	printf("Your Discount is %d and Amount is %d",p,dis);
	printf("\n You Pay Amount Is %d",(y-dis));
	}
