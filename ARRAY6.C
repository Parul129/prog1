//WAP to get a name from the user & print all chars except garbage values
#include<stdio.h>
void main()
{
int i;
char ch[100];
clrscr();
//printf(ch);

printf("enter your name: ");
scanf("%s", &ch);
	for(i=0;ch[i]!='\0';i++)
	{
	printf("%c",ch[i]);
	}

getch();
}