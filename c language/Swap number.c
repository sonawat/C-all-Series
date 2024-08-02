//write a Program for Swappping or Exchanging
// Two Numbers Using Extra Variable

#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y,t;
	printf("\n Enter Any two Number");
	scanf("%d%d",&x,&y);
	printf("\n Before Exchange a = %d and b = %d",x,y);
	t = x;
	x = y;
	y =t;
	printf("\n After Exchange a = %d and b = %d",x,y);
	
}
