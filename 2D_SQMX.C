void main()
{
int c,r,i,j,n,a[10][10];
clrscr();

	//input size of matrix
	printf("Enter the size of matrix: ");
	scanf("%d%d",&c,&r);

	//Square matrix condition
	if(c==r)
	{
		printf("\nSquare Matrix\n");
		//input matrix
		for(i=0;i<c;i++)
		{
			printf("Row:%d",i+1);
			for(j=0;j<r;j++)
			{
			printf("\nEnter value at [%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
			}
		}

		//display matrix
		printf("\nMatrix is:\n");
		for(i=0;i<c;i++)
		{
			for(j=0;j<r;j++)
			{
			printf("%d\t",a[i][j]);
			}
		printf("\n");
		}
	}
	else
	{
	printf("\nNot square matrix");
	}

getch();
}