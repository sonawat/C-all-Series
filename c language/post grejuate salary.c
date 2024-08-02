#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,s;
	printf("\n Your Gender is Male Enter 0 and Female  Enter 1 \n");
	scanf("%d",&a);
	printf("\n Your Qulification is postGreduate Enter 2 Greduate Enter 3\n");
	scanf("%d",&b);

		printf("\n Enter Your year Of Services");
	scanf("%d",&c);	

	if(a==0)
	{
		if(b==2)
		{
			printf("%d",b);
			if(c>=10)
			{
				s = 15000;
			}
			else if(c<10)
			{
				s = 10000;
			}  
			
		}
		else if(b==3)
		{
			 if(c>=10)
			{
				s = 10000;
			}
			else if(c<10)
			{
				s = 7000;
			}
		}
		else
		{
		printf("\n Please Enter Corrrect Input male");
		}
	}
	else if(a==1)
	{
		if(b==2)
		{
			if(c>=10)
			{
				s = 12000;
			}
			else if(c<10)
			{
				s = 10000;
			}
		}
		else if(b==3)
		{
			if(c>=10)
			{
				s = 9000;
			}
			else if(c<10)
			{
				s = 6000;
			}
		}
		else
		{
		printf("\n Please Enter Corrrect Input female");
		}
	}
	else
	{
		printf("\n Plese Enter Correct Input both");
	}
	
	printf("\n %d Is Salary",s);
}
