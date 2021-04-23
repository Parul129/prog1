// Character array(ca be considered as String)
// A string is a sequence of chars
// Strings in C are terminated with a null char called '\0'
#include<stdio.h>
void main()
{
int i;
char chArr[25];
clrscr();

printf("Enter your name: ");
scanf("%s",&chArr);

chArr[0]='H';
chArr[1]='E';
chArr[2]='L';
chArr[3]='L';
chArr[4]='\0';

chArr[5]='A';

//printf(chArr);
	for(i=0;i<25;i++)
	{
	printf("%c",chArr[i]);

	}

getch();
}
