#include<stdio.h>
#include<conio.h>

int main()
{
	int x,y,i,s,n,j,k=0;
	printf("Enter Starting Number");
	scanf("%d",&x);
	printf("Enter distance");
	scanf("%d",&y);
	
	printf("ArithMetic Progress :\n\n");
	for(i=0;i<=10;i++)
	{
		 s = x+(i*y);
		 printf("%d\t",s);
	}
	
		printf("\nEnter The Value Of N\n");
		scanf("%d",&n);
	
	printf("\n ArithMetic Progress in %d va pad :\n\n",n);
		
		j = x+(n-1)*y;
	
		 printf("%d\t",x+(n-1)*y);
	
	
		printf("\n ArithMetic Progress in %d va pad ka Addition :\n\n",n);
	
		k = (n/2)*(2*x+(n-1)*y);
	
		 printf("%d\t",k);
}

