#include<stdio.h>
#include<conio.h>

int main()
{
	int n,a,b,c,d,e,f,g,h,i,j,k,l,m,o;
	printf("Enter Any Number \n");
	scanf("%d",&n);	
	

	  a = n/500;
	  b = n%500;
	  printf("500 * %d : %d\n",a,(a*500));

	 c = b/200;
	 d = b%200;
	 
	  printf("200 * %d : %d\n",c,(c*200));
	  
	  e = d/100;
	  f = d%100;
	  
	   printf("100 * %d : %d\n",e,(e*100));
	   	   
 	  g = f/50;
	  h = f%50;
	  
	   printf("50 * %d : %d\n",g,(g*50));
	  
	  i = h/20;
	  j = h%20;
	  
	   printf("20 * %d : %d\n",i,(i*20));
	   
	    k = j/10;
	  l = j%10;
	  
	   printf("10 * %d : %d\n",k,(k*10));
	   
	   m = l/5;
	  o = l%5;
	  
	   printf("5 * %d : %d\n",m,(m*5));  
    
	   
	 }
	

	

