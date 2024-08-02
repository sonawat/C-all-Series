#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d,e,f,s;
	char grade; 
	a1: printf("\n Enter Number of Maths");
	scanf("%d",&a);
	 if(a<0||a>100)
	{
		printf("\n please Enter Correct input ");
		goto a1; 
		//exit(0);
	}
	
	a2: printf("\n Enter Number of Physics");
	scanf("%d",&b);
	if(b<0||b>100)
	{
		printf("\n please Enter Correct input ");
		goto a2; 
	}
	a3:printf("\n Enter Number of Chemistry");
	scanf("%d",&c);
	if(c<0||c>100)
	{
		printf("\n please Enter Correct input ");
		goto a3; 
	}
		a4 : printf("\n Enter Number of Hindi");
	scanf("%d",&d);
	if(d<0||d>100)
	{
		printf("\n please Enter Correct input ");
		goto a4; 
	}
		a5: printf("\n Enter Number of English");
	scanf("%d",&e);
	if(e<0||e>100)
	{
		printf("\n please Enter Correct input ");
		goto a5; 
	}
	
	s = (a+b+c+d+e);

	f = (s / 500.0) * 100;
	
	if(f>=90)
	{
		grade = 'A';	
	}
	else if(f>=80)
	{
		grade = 'B';	
	}
	else if(f>=70)
	{
		grade = 'C';	
	}.0
	
	else if(f>=60)
	{
		grade = 'D';	
	}
	else if(f>=40)
	{
		grade = 'E';	
	}
	else if(f<40)
	{
		grade = 'F';	
	}
		printf("\n Total marks is : %d",s);
		printf("\n Persentage is %d:", f);
		printf("\n Persentage is %c:", grade);
}
