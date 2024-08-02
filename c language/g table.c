#include<stdio.h>
#include<conio.h>

int main()
{
	int x,y,z,a,i,j;
	printf("Enter Any Number");
	scanf("%d",&x);
	
	y = x/10;
	z = x%10;

	if(y == 0)
	{
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=x;j++)
		{
			printf("%d\t",i*j);
		}
		printf("\n");
	}
	}
	
	
	else if(y==1)
	{
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=10;j++)
		{
		printf("%d\t",i*j);
		}	
		printf("\n");
	}
	printf("___________________________________________________________________\n");
	printf("\n");
	
	for(i=11;i<=(z+10);i++)
	{
		printf("%d\t",i);
	}
	printf("\n");
	for(i=22;i<=(z*2+20);i++)
	{
		printf("%d\t",i);
		i++;
	}
		printf("\n");
	for(i=33;i<=(z*3+30);i++)
	{
		printf("%d\t",i);
		i = i+2;
	}
		printf("\n");
	for(i=44;i<=(z*4+40);i++)
	{
		printf("%d\t",i);
		i = i+3;
	}
		printf("\n");
		for(i=55;i<=(z*5+50);i++)
	{
		printf("%d\t",i);
		i = i+4;
	}
		printf("\n");
		for(i=66;i<=(z*6+60);i++)
	{
		printf("%d\t",i);
		i = i+5;
	}
		printf("\n");
		for(i=77;i<=(z*7+70);i++)
	{
		printf("%d\t",i);
		i = i+6;
	}
		printf("\n");
			for(i=88;i<=(z*8+80);i++)
	{
		printf("%d\t",i);
		i = i+7;
	}
		printf("\n");
		for(i=99;i<=(z*9+90);i++)
	{
		printf("%d\t",i);
		i = i+8;
	}
		printf("\n");
			for(i=110;i<=(z*10+100);i++)
	{
		printf("%d\t",i);
		i = i+9;
	}
		printf("\n");	
}

//20 ke bad  ki Value

else if(y == 2)
{
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=10;j++)
		{
		printf("%d\t",i*j);
		}	
		printf("\n");
	}
	printf("___________________________________________________________________\n");
	printf("\n");
	
	for(i=11;i<=(10+10);i++)
	{
		printf("%d\t",i);
	}
	printf("\n");
	for(i=22;i<=(2*10+20);i++)
	{
		printf("%d\t",i);
		i++;
	}
		printf("\n");
	for(i=33;i<=(3*10+30);i++)
	{
		printf("%d\t",i);
		i = i+2;
	}
		printf("\n");
	for(i=44;i<=(4*10+40);i++)
	{
		printf("%d\t",i);
		i = i+3;
	}
		printf("\n");
		for(i=55;i<=(10*5+50);i++)
	{
		printf("%d\t",i);
		i = i+4;
	}
		printf("\n");
		for(i=66;i<=(10*6+60);i++)
	{
		printf("%d\t",i);
		i = i+5;
	}
		printf("\n");
		for(i=77;i<=(10*7+70);i++)
	{
		printf("%d\t",i);
		i = i+6;
	}
		printf("\n");
			for(i=88;i<=(10*8+80);i++)
	{
		printf("%d\t",i);
		i = i+7;
	}
		printf("\n");
		for(i=99;i<=(10*9+90);i++)
	{
		printf("%d\t",i);
		i = i+8;
	}
		printf("\n");
		for(i=110;i<=(10*10+100);i++)
	{
		printf("%d\t",i);
		i = i+9;
	}
		printf("\n");
	
	
	//21 ke bad
	printf("___________________________________________________________________\n");
		printf("\n");
		for(i=21;i<=(20+z);i++)
	{
		printf("%d\t",i);
	}
		printf("\n");
		for(i=42;i<=(z*2+40);i++)
	{
		printf("%d\t",i);
		i = i+1;
	}
		printf("\n");
		for(i=63;i<=(z*3+60);i++)
	{
		printf("%d\t",i);
		i = i+2;
	}	
	printf("\n");
		for(i=84;i<=(z*4+80);i++)
	{
		printf("%d\t",i);
		i = i+3;
	}
	printf("\n");
		for(i=105;i<=(z*5+100);i++)
	{
		printf("%d\t",i);
		i = i+4;
	}	
	printf("\n");
		for(i=126;i<=(z*6+120);i++)
	{
		printf("%d\t",i);
		i = i+5;
	}
	printf("\n");
		for(i=147;i<=(z*7+140);i++)
	{
		printf("%d\t",i);
		i = i+6;
	}
	printf("\n");
		for(i=168;i<=(z*8+160);i++)
	{
		printf("%d\t",i);
		i = i+7;
	}
	printf("\n");
		for(i=189;i<=(z*9+180);i++)
	{
		printf("%d\t",i);
		i = i+8;
	}
	printf("\n");
		for(i=210;i<=(z*10+200);i++)
	{
		printf("%d\t",i);
		i = i+9;
	}
}

//  30 ke bad ka
if(y == 3)
{
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=10;j++)
		{
		printf("%d\t",i*j);
		}	
		printf("\n");
	}
	printf("___________________________________________________________________\n");
	printf("\n");
	
	for(i=11;i<=(10+10);i++)
	{
		printf("%d\t",i);
	}
	printf("\n");
	for(i=22;i<=(2*10+20);i++)
	{
		printf("%d\t",i);
		i++;
	}
		printf("\n");
	for(i=33;i<=(3*10+30);i++)
	{
		printf("%d\t",i);
		i = i+2;
	}
		printf("\n");
	for(i=44;i<=(4*10+40);i++)
	{
		printf("%d\t",i);
		i = i+3;
	}
		printf("\n");
		for(i=55;i<=(10*5+50);i++)
	{
		printf("%d\t",i);
		i = i+4;
	}
		printf("\n");
		for(i=66;i<=(10*6+60);i++)
	{
		printf("%d\t",i);
		i = i+5;
	}
		printf("\n");
		for(i=77;i<=(10*7+70);i++)
	{
		printf("%d\t",i);
		i = i+6;
	}
		printf("\n");
			for(i=88;i<=(10*8+80);i++)
	{
		printf("%d\t",i);
		i = i+7;
	}
		printf("\n");
		for(i=99;i<=(10*9+90);i++)
	{
		printf("%d\t",i);
		i = i+8;
	}
		printf("\n");
		for(i=110;i<=(10*10+100);i++)
	{
		printf("%d\t",i);
		i = i+9;
	}
		printf("\n");
	
	
	//21 ke bad
	printf("___________________________________________________________________\n");
		printf("\n");
		for(i=21;i<=(20+10);i++)
	{
		printf("%d\t",i);
	}
		printf("\n");
		for(i=42;i<=(10*2+40);i++)
	{
		printf("%d\t",i);
		i = i+1;
	}
		printf("\n");
		for(i=63;i<=(10*3+60);i++)
	{
		printf("%d\t",i);
		i = i+2;
	}	
	printf("\n");
		for(i=84;i<=(10*4+80);i++)
	{
		printf("%d\t",i);
		i = i+3;
	}
	printf("\n");
		for(i=105;i<=(10*5+100);i++)
	{
		printf("%d\t",i);
		i = i+4;
	}	
	printf("\n");
		for(i=126;i<=(10*6+120);i++)
	{
		printf("%d\t",i);
		i = i+5;
	}
	printf("\n");
		for(i=147;i<=(10*7+140);i++)
	{
		printf("%d\t",i);
		i = i+6;
	}
	printf("\n");
		for(i=168;i<=(10*8+160);i++)
	{
		printf("%d\t",i);
		i = i+7;
	}
	printf("\n");
		for(i=189;i<=(10*9+180);i++)
	{
		printf("%d\t",i);
		i = i+8;
	}
	printf("\n");
		for(i=210;i<=(10*10+200);i++)
	{
		printf("%d\t",i);
		i = i+9;
	}

	printf("___________________________________________________________________\n");
		printf("\n");
	for(i=31;i<=(z*1+30);i++)
	{
		printf("%d\t",i);
	}
	printf("\n");
		for(i=62;i<=(z*2+60);i++)
	{
		printf("%d\t",i);
		i = i+1;
	}
	printf("\n");
		for(i=93;i<=(z*3+90);i++)
	{
		printf("%d\t",i);
		i = i+2;
	}
		printf("\n");
	for(i=124;i<=(z*4+120);i++)
	{
		printf("%d\t",i);
		i = i+3;
	}
		printf("\n");
	for(i=155;i<=(z*5+150);i++)
	{
		printf("%d\t",i);
		i = i+4;
	}
		printf("\n");
	for(i=186;i<=(z*6+180);i++)
	{
		printf("%d\t",i);
		i = i+5;
	}
		printf("\n");
	for(i=217;i<=(z*7+210);i++)
	{
		printf("%d\t",i);
		i = i+6;
	}
		printf("\n");
	for(i=248;i<=(z*8+240);i++)
	{
		printf("%d\t",i);
		i = i+7;
	}
		printf("\n");
	for(i=279;i<=(z*9+270);i++)
	{
		printf("%d\t",i);
		i = i+8;
	}
		printf("\n");
	for(i=310;i<=(z*10+300);i++)
	{
		printf("%d\t",i);
		i = i+9;
	}
	
		








}
else
{
	printf("Enter Number Which is Greater Than 0 And Less Than 40");
}
}
