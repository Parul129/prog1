#include<stdio.h>
void main()
{
int i,j,ch;

i=1;
while(i<=4)
{
	j=1;
	while(j<=4)
	{
	printf("%c", ch++); // Pre and post are effective
	j++;
	}
	print("\n");
	++i;
}
getch();
}