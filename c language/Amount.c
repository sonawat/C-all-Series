#include<stdio.h>
#include<conio.h>

int main()
{
	int x,y,z,a,pr;
printf("\nEnter price of product");
scanf("%d",&x);
printf("\n Enter Rate of product");
scanf("%d",&y);

z= x * y;

if(z>=25000)
{
	a = z*(float)12/100;
	pr = 12;
}
else if(z>=20000)
{
	a = z*(float)8/100;
	pr = 8;
}
else if(z>=15000)
{
	a = z*(float)6/100;
	pr = 6;
}
else if(z>=10000)
{
	a = z*(float)4/100;
	pr = 4;
}
else if(z>=5000)
{
	a = z*(float)2/100;
	pr = 2;
}
else if(z>=2500)
{
	a = z*(float)1/100;
	pr = 1;
}
else
{
	a = z*(float)0/100;
	pr = 0;
}
printf("\nTotal price %d",z);
printf("\nYour Discount persentage is  %d and amount %d",pr,a);
printf("\nTotal Gross Amount %d \n",(z-a));

}

