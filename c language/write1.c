#include<stdio.h>
#include<conio.h>

int main()
{
int i,n,j,s1=0,s2=1,s3,c,k=1,l=1;

	printf("How Many terms You Want To Print \n");
	scanf("%d",&n);
	printf("Evan Series : \n");
	for(i=1;i<=n*2;i++)
	{
	
		if(i%2 == 0)
		{
		printf("%d\t",i);
		}
	}
		
		printf("\nOdd Series : \n");
	for(i=1;i<=n*2;i++)
	{
		if(i%2 != 0)
		{
	printf("%d\t",i);
	}
}

printf("\n Squre Series : \n\t");
	for(i=1;i<=n*2;i++)
	
 {
 	printf("%d\t",i*i);	  
 }
 
printf("\n Febonica Series : \n\t");
 	for(i=1;i<=n*2;i++)	
 {
 	s3 =s1+s2;
 	printf("%d\t",s3);
	 s1 = s2;
	 s2 = s3;	  
 }
 
 printf("\n Fectorial Series : \n\t");
 		for(i=1;i<=n;i++)
	{
	for(j=1;j<=i;j++)
	{
		k = k*j;
		
	}	
	printf("%d\t",k);
	k=1;
}

 printf("\n Power Series : \n\t");
 		for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
		l = l*i;
	
		}
			printf("%d\t",l);
		l=1;	
	}	

}
	
