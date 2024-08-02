#include<stdio.h>
#include<conio.h>

int main()
{
	char x;
	printf("\nEnter Any Character");
	scanf("%c",&x);
	
	if(x == 'a'||x == 'e'||x == 'i'||x == 'o'||x == 'u')
	{
		printf("%c is Vowels",x);
	}
	else
	{
		printf("%c is Consonants");	
	}
}
