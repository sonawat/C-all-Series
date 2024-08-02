//write a Program for Swappping or Exchanging
// Three Numbers Using Extra Variable

#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y,z,t;
	printf("\n Enter Any three Number");
	scanf("%d%d%d",&x,&y,&z);
	printf("\n Before Exchange a = %d and b = %d and c = %d",x,y,z);
	t = x;
	x = y;
	y = z;
	z =t;
	printf("\n After Exchange a = %d and b = %d and c = %d",x,y,z);
	
}
