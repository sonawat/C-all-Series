#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float x1,y1,x2,y2,e;
	
	printf("Enter First two Number");
	scanf("%f %f",&x1,&y1);
	
 	printf("Enter Second two Number");
	scanf("%f %f",&x2,&y2);
	
	e = (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
	
	printf("%.2f",sqrt(e));
}
