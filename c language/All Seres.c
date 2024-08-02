#include<stdio.h>

int main()
{
	int n,x,i,a=0,a1=1,a2,b,r,s=0,j,f=1,e,e1,e2,h,h1,h2=1,k,c;
	printf("How Many Terms You Want To print \n");
	scanf("%d",&n);
	
			printf("Natural Series For Press : 1\n");
		    printf("Even Series For Press    : 2\n");
  			printf("Odd Series For Press     : 3\n");
			printf("Squre Series For Press   : 4 \n");
  			printf("Cube Series For Press    : 5\n");
			printf("Fibonic Series For Press : 6\n");
			printf("ArmStron Series For Press: 7\n");
			printf("Fectorial Serie For Press: 8\n");
   			printf("A.p Series For Press     : 9\n");
   			printf("G.p Series For Press     : 10\n");
		 	printf("H.p Series For Press     : 11\n");
		 	printf("Prime Series For Press   : 12\n");
			printf("NonPrime Series For Press: 13\n");
		   printf("Not For Series Press      : 14\n");
		a1 : printf("\n\n Enter Any Number : ");
		scanf("%d",&x);
		
		//Switch Case Statement Start
			
	switch(x)
	{
		
	//Natural Series
		case 1:
		{	
			printf("\n Natural Series Is:\n");
			printf("___________________________________________\n\n");
			
		for(i=1;i<=n;i++)
		{
			printf("%d \t",i);
		}
		
		goto a1;
		}
		
		//Evan Series
		case 2:
		{	
			printf("\n Evan Series Is:\n");
			printf("___________________________________________\n\n");
			
		for(i=1;i<=n*2;i++)
		{
			if(i%2==0)
		{
			printf("%d \t",i);
		}
		}
			
		goto a1;
		}	
		
			//Odd Series
		case 3:
		{	
			printf("\n Odd Series Is:\n");
			printf("___________________________________________\n\n");
			
		for(i=1;i<=n*2;i++)
		{
			if(i%2!=0)
		{
			printf("%d \t",i);
		}
		}
			
		goto a1;
		}	
		
			//Squre Series
		case 4:
		{	
			printf("\n Squre Series Is:\n");
			printf("___________________________________________\n\n");
			
		for(i=1;i<=n;i++)
		{
		
			printf("%d \t",i*i);
		}
			
		goto a1;
		}	
		
		
			//Cube Series
		case 5:
		{	
			printf("\n Cube Series Is:\n");
			printf("___________________________________________\n\n");
			
		for(i=1;i<=n;i++)
		{
		
			printf("%d \t",i*i*i);
		}
			
		goto a1;
		}	
		
		//Febonicca Series
		case 6:
		{	
			printf("\n Febonicca Series Is:\n");
			printf("___________________________________________\n\n");
			
			printf("%d\t%d\t",a,a1);
		for(i=1;i<=n-2;i++)
		{
			a2 = a + a1;
			printf("%d \t",a2);
			a = a1;
			a1 = a2;
		}
			
		goto a1;
		}
		
	
		//ArmStrong Series
		case 7:
		{	
			printf("\n ArmStrong Series Is:\n");
			printf("___________________________________________\n\n");
			
		for(i=1;i<=100000;i++)
		{
			b=i;
			s=0;			
			while(b!=0)
		{
			r = b%10;
			b = b/10;
			s=s+r*r*r;			
		}
		if(s==i)
	{
		printf("%d \t",s,i);
	}
		}
				
		goto a1;
		}
	
	
		//Fectorial Series
case 8:
	{	
		printf("\n Fectorial Series Is:\n");
		printf("___________________________________________\n\n");
		
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=i;j++)
			{
				f = f*j;
			}
			printf("%d \t",f);
			f=1;
		}	
		goto a1;
		}	
		
		
		//Arathmetic Progression Series
case 9:
	{	
		printf("\n Enter Starting Number ");
		scanf("%d",&e);
		printf("\n Enter Difference ");
		scanf("%d",&e1);
	
		printf("\n Arathmetic Progression Series Is:\n");
		printf("___________________________________________\n\n");
		
		for(i=1;i<=n;i++)
		{
			e2 = e+(i*e1);
			printf("%d\t",e2);
		}	
	goto a1;
		}		
	
	
		//G.P Series
case 10:
	{	
		printf("\n Enter Starting Number ");
		scanf("%d",&h);
		printf("\n Enter Difference ");
		scanf("%d",&h1);
	
		printf("\n G.P Progression Series Is:\n");
		printf("___________________________________________\n\n");
		printf("%d\t",h);
		h2 = 1;
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=i;j++)
		{
		//printf("%d\n",h2*h1*h);
			h2 = h2 * h1;
		}
			printf("%d\t",h*h2);
			h2=1;
		}	
		goto a1;
		}	
		
	
		//H.P Series
case 11:
	{	
		printf("\n Enter Starting Number ");
		scanf("%d",&e);
		printf("\n Enter Difference ");
		scanf("%d",&e1);
	
		printf("\n H.P Series Is:\n");
		printf("___________________________________________\n\n");
		printf("1/%d\t",h);
		for(i=1;i<=n;i++)
		{
			e2 = e+(i*e1);
			printf("1/%d\t",e2);
		}	
	goto a1;
		}
		
		
		
	//Prime Number Series 
	
	case 12:
	
	{
		printf("\n Prime Number Series Is:\n");
		printf("___________________________________________\n\n");
	for(j=1;j<=(n*2)+4;j++)
	{
		c=0;
		for(i=2;i<=j-1;i++)
		{
		if(j%i==0)
		{
			c++;
			break;
		}
		}
		if(c==0)
		{
		printf("%d\t",j);
		}
	}
	goto a1;
	}
		
		
		
	//Non - Prime Number Series 
	
	case 13:
	
	{
			printf("\n Non-Prime Number Series Is:\n");
		printf("___________________________________________\n\n");
	for(j=1;j<=(n*2);j++)
	{
		c=0;
		for(i=2;i<=j-1;i++)
		{
		if(j%i==0)
		{
			c++;
			break;
		}
		}
		if(c==1)
		{
		printf("%d\t",j);
		}
	}
	goto a1;
	}	
		
		
		
	
	default :
	{
		exit();
	}
		
		
			
	}			
}
