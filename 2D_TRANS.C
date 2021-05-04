/*Transpose matrix*/
void main()
{
int i,j,c,r,n;
int a[10][10],b[10][10];
clrscr();

printf("Enter the size of an array: ");
scanf("%d%d",&c,&r);

	//input array
		for(i=0;i<c;i++)
		{
			for(j=0;j<r;j++)
			{
			printf("Enter element[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
			}
		}

	//display orignal matrix
	printf("\nOriginal Matrix is: \n");
		for(i=0;i<c;i++)
		{
			for(j=0;j<r;j++)
			{
			printf("%d\t",a[i][j]);
			}
		printf("\n");
		}

	//finding transpose of a matrix and store it in b[][]
		for(i=0;i<c;i++)
			for(j=0;j<r;j++)
				b[j][i]=a[i][j];


	//display transpose matrix
	printf("\nTranspose Matrix is:\n");
		for(i=0;i<c;i++)
		{
			for(j=0;j<r;j++)
			{
			printf("%d\t",b[i][j]);
			}
		printf("\n");
		}
getch();
}