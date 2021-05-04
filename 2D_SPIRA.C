/*Matrix in Spiral order*/
void main()
{
int i,j,n,m,a[10][10],count=0;
int r=0,c=0,row=3,col=3;
clrscr();

	//input size of an array
	printf("Enter the size of row: ");
	scanf("%d",&n);

	printf("\nEnter the size of column: ");
	scanf("%d",&m);
	printf("\n");
	//input values of an array
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
		printf("Values of [%d][%d]:  ",i,j);
		scanf("%d",&a[i][j]);
		}
	}

	//display values of an array
	printf("Matrix is: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
		printf("%d\t",a[i][j]);
		}
	printf("\n");
	}

	//conition for Spiral order
	printf("Spiral order is: \n");
	while(count<=16)
	{
		//Left to Right(1st Row)
		for(i=c;i<=col;i++)
		{
			printf("%d\t",a[r][i]);

		}
		r++;
		count++;

		//Top to Bottom(1st Column)
		for(i=r;i<=row;i++)
		{
			printf("%d\t",a[i][col]);
		}
		col--;
		count++;
		//Right to Left(Last Row)
		for(i=col;i>=c;i--)
		{
			printf("%d\t",a[row][i]);
		}
		row--;
		count++;
		//Bottom to Top(1st Column)
		for(i=row;i>=r;i--)
		{
			printf("%d\t",a[i][c]);
		}
		c++;
		count++;
       }
getch();
}