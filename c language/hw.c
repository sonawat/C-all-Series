#include<stdio.h>

int main()
{
	int i;
char array[][15] = {" ","A For Apple","B for Ball","C For Cat","D For Dog",
"E For Elephent","F For Fish","G For Graps","H For Horse",
"I For Ice","J For Jokar","K For Kite","L For Lion",
"M For Man","N For Nest","O For Owl","P For Parrot",
"Q For Queen","R For Rose","S For Sun","T For Tiger",
"U For Umbrela","V For Van","W For Watch","X For X-ray",
"Y For Yak","Z For Zebra"};

for(i=1;i<=26;i++)
{
	if(i%4==0)
	{
		printf("%s\n\n",array[i]);
	}
	else
	{
printf("%s\t\t",array[i]);
	}
}
}
