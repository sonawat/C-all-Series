#include<stdio.h>
#include<conio.h>

int main()
{
	int A,B,c,s;
	
	a1 : printf("Enter Your Percent In Main Subject A \n ");
	scanf("%d",&A);
	
	
	if(A>100 || A<0)
	{
		printf("Please Enter correct Input \n");
		goto a1;
	}
	
	a2 : printf("Enter Your Percent In Other Subject B  \n ");
	scanf("%d",&B);
	
	if(A>100 || A<0)
	{
		printf("Please Enter correct Input \n");
		goto a2;
	}
	
	if(A >= 55 && B>=45)
	{
		printf("You Are Qualify");
	}
	else if(A < 55 || A >= 45 && B>=55)
	{
		printf("You Are Qualify 3");
	}
	else if(B<45 && A>=65)
	{
		printf("You Are Allowed to reappear in examination");
	}
	else 
	{
	printf("You Are Faailed");
	}
}

