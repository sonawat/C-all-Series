//write a Program for Swappping or Exchanging
// Three Numbers 

#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y,z;
	printf("\n Enter Any two Number");
	scanf("%d%d%d",&x,&y,&z);
	printf("\n Before Exchange a = %d and b = %d and c =%d",x,y,z);
	x = x+y+z;
	y = x-y-z;
	z = x-y-z;
	x = x-y-z;
	printf("\n After Exchange a = %d and b = %d and c =%d",x,y,z);	
}
