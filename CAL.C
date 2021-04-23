#include<stdio.h>
void main()
{
int ch;
int n1,n2;
	do
	{
	printf("1.  Add\n");
	printf("2.  Sub\n");
	printf("3.  Mul\n");
	printf("4.  Div\n");
	printf("0.  Exit\n\n");
	printf("Enter your choice: ");
	scanf("%d",&ch	);

	if(ch>=1 && ch<=4)
	{
		printf("Enter 2 Numbers : ");
		scanf("%d%d",&n1,&n2);
	}

	switch(ch)
	{
	 case 1:printf("Sum of %d and %d is %d",n1,n2,n1+n2);
		break;
	 case 2:printf("Difference of %d and %d is %d",n1,n2,n1-n2);
		break;
	 case 3:printf("Multiplication of %d and %d is %d",n1,n2,n1*n2);
		break;
	 case 4:printf("Division of %d and %d is %d",n1,n2,n1/n2);
		break;
	 case 0:break;

	 default:printf("Invalid choice..");
	}

	}while(ch!=0);

getch();
}