#include<stdio.h>
#include<conio.h>

int main()
{
	int x,p,r,g=0,k,t,i,l;
	int a[20];
	
printf("\nEnter Any Number \n");
scanf("%d",&x);

p = x;
t = 0;
//while((p>0) || (p=0))
while(p!=0)
{
	r = p%10;
	p = p/10;
	a[t] = r;
	t++;		
}


for(i=t-1;i>=0;i--)
{
	
	switch(a[i])
	{	
	case 1:
	{
			printf("ONE \t");
			break;
	}
		case 2:
	{
			printf("TWO \t");
			break;
	}
		case 3:
	{
			printf("THREE \t");
			break;
	}
		case 4:
	{
			printf("FOUR \t");
			break;
	}
		case 5:
	{
			printf("FIVE \t");
			break;
	}
		case 6:
	{
			printf("SIX \t");
			break;
	}
		case 7:
	{
			printf("SEVEN \t");
			break;
	}
		case 8:
	{
			printf("EIGHT \t");
			break;
	}
		case 9:
	{
			printf("NINE \t");
			break;
	}
		case 0:
	{
			printf("Zero \t");
			break;
	}
	}	
}

}
