#include<stdio.h>

int my(int r)
{
	int p=1,i;
	for(i=1;i<=r;i++)
	{
		p = p*i;
	}
	return p;
}


int main()
{
	int n,i,j,r,p,w;
	printf("Enter Any Number");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		//printf("%d :",i);
		p=i;
		w=0;
		while(p!=0)
		{
			r=p%10;
			p = p/10;
			//printf("%d,",my(r));
			w = w + my(r);			
		}
		if(w == i)
		{
		printf("%d :",w);
			printf("\n");
		}
	}
}
