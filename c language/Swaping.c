//write a Program for Swappping or Exchanging
// Two Numbers 

#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y;
	printf("\n Enter Any two Number");
	scanf("%d%d",&x,&y);
	printf("\n Before Exchange a = %d and b = %d",x,y);
	x = x+y;
	y = x-y;
	x = x-y;
	printf("\n After Exchange a = %d and b = %d",x,y);
	
}
