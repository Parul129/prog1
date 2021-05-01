/* 2D Array: Collection of rows and columns */
void main()
{
int a[10][10];
int i,j,r,c;

	//input matrix
	printf("Enter size of matrix: ");
	scanf("%d%d",&r,&c);

	//input values in matrix
	for(i=0;i<r;i++)
	{
	printf("\nRow%d",i+1);
		for(j=0;j<c;j++)
		{
		printf("\nEnter value: ");
		scanf("%d",&a[i][j]);
		}
	}

	//display matrix
	printf("\nMatrix is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
		printf("%d\t",a[i][j]);
		}
		printf("\n");
	}

getch();
}