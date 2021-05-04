#define MAX 10
void main()
{
	int a[MAX][MAX],b[MAX][MAX],c[MAX][MAX]={0};
	int i,j,k,r1,r2,c1,c2;
	clrscr();

	printf("Enter size of matrix1: ");
	scanf("%d%d",&r1,&c1);

	printf("Enter size of matrix2: ");
	scanf("%d%d",&r2,&c2);

	if(c1==r2)
	{
		printf("\nMatrices can be multiplied !!\n");

		//input matrix A
		printf("\nInput Matrix A\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
			printf("Enter value a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
			}
		}

		//input matrix B
		printf("\nInput Matrix B\n");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
			printf("Enter value b[%d][%d]:",i,j);
			scanf("%d",&b[i][j]);
			}
		}

		//display matrix A
		printf("\nMatrix A:\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
			printf("%d\t",a[i][j]);
			}
			printf("\n");
		}

		//display matrix B
		printf("\nMatrix B:\n");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
			printf("%d\t",b[i][j]);
			}
			printf("\n");
		}

		//Multiplying matrix A and B
		printf("\nResultant Matrix C\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				for(k=0;k<c1;k++)
				{
				c[i][j]=c[i][j]+a[i][k]+b[k][j];
				}
				printf("%d\t",c[i][j]);
			}
		printf("\n");
		}
	}

	else
	{
	printf("\nMatrices can't be multiplied!!");
	}
getch();
}