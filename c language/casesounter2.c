#include<stdio.h>
#include<conio.h>

int main()
{
	int n,a,b,c,d,e,f,g,h,i,j,k,l,m,o,z;
	printf("How Many Not of 500 :");
	scanf("%d",&a);	
	printf("\n");
	printf("How Many Not of 200 :");
	scanf("%d",&b);
	printf("\n");
	printf("How Many Not of 100 :");
	scanf("%d",&c);	
	printf("\n");	
	printf("How Many Not of 50  :");
	scanf("%d",&d);	
	printf("How Many Not of 20  :");
	scanf("%d",&e);
	printf("\n");
	printf("How Many Not of 10  :");
	scanf("%d",&f);
	printf("\n");	  
	printf("How Many Not of 5   :");
	scanf("%d",&g);
	printf("\n");
	
	z = 500*a+200*b+100*c+50*d+20*e+10*f+5*g;
	
	printf("\n500 * %d : %d \n",a,500*a);
	printf("  500 * %d : %d\n",b,200*b);
	printf("  500 * %d : %d\n",c,100*c);
	printf("  500 * %d : %d\n",d,50*d);
	printf("  500 * %d : %d\n",e,20*e);
	printf("  500 * %d : %d\n",f,10*f);
	printf("  500 * %d : %d\n",g,5*g);
	printf("Total Amount Is :%d\n\n",z);	
}
