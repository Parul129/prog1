#define MAX 10
void main()
{
	int a[MAX][MAX],b[MAX][MAX],c[MAX][MAX];
	int i,j,r1,r2,c1,c2;
	clrscr();

	printf("Enter size of matrix1: ");
	scanf("%d%d",&r1,&c1);

	printf("Enter size of matrix2: ");
	scanf("%d%d",&r2,&c2);

	if(r1==r2 && c1==c2)
	{
		printf("Matrices can be added !!\n");

		//input matrix A
		printf("\nInput Matrix A\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
			printf("Enter value[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
			}
		}
		//input matrix B
		printf("\nInput Matrix B\n");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
			printf("Enter value[%d][%d]:",i,j);
			scanf("%d",&b[i][j]);
			}
		}

		//adding matrix A and B
		printf("\nResultant Matrix C\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
			c[i][j]=a[i][j]+b[i][j];
			printf("%d\t",c[i][j]);
			}
		printf("\n");
		}
	}

	else
	{
	printf("\nMatrices can't be added!!");
	}
getch();
}