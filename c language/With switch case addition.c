#include<stdio.h>
#include<conio.h>

int main()
{
	int num[20];
	int i,n,j,a;
	printf("Enter N`umber of element in Array\n");
	scanf("%d",&n);
	
	printf("Enter The elements ");
	
	for(i=0;i<n;++i)
	{
		printf("Enter %d Element =>",i);
		scanf("%d",&num[i]);
	}
	for(i=0;i<n;++i)
	{
		for(j=i+1;j<n;j++)
		{
			if(num[i]<num[j])
			{
				a = num[i]; 
				num[i] = num[j];
				num[j] = a;
			}
		}
	}
	printf("Array is Ascending Order \n");
	for(i=0;i<n;++i)
	{
	printf("Answer %d\n",num[i]);
	}
}
