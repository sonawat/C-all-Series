#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j;
	printf("\n");
	printf("Capital Letter \n");
	for(i=65;i<=90;i++)	
	{
		if(i==70 || i==76 || i== 82 || i==88 )
		{
		printf("%c \n",i);
		}
		else
		{
			printf("%c \t",i);
		}
		
	}
		
		printf("\n---------------------------\n");
		for(i=97;i<=122;i++)	
	{
		if(i%6==0)
		{
		printf("%c \n",i);
		}
		else
		{
			printf("%c \t",i);
		}
	}
	
}
