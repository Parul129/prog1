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
		printf("\nMatrix Element\n");
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
		printf("\nSquare Matrix is:\n");
		for(i=0;i<c;i++)
		{
			for(j=0;j<r;j++)
			{
			printf("%d\t",a[i][j]);
			}
		printf("\n");
		}

		//display prime diagonal element
		printf("\nPrime diagonal is:\n ");
			for(i=0;i<c;i++)
			{
				for(j=0;j<r;j++)
				{
					if(i==j)
					{
					printf("%d",a[i][j]);
					}
				printf("\t");
				}
			printf("\n");
			}

		//display upper triangular prime diagonal element
		printf("\nUpper triangular prime diagonal is:\n");
			for(i=0;i<c;i++)
			{
				for(j=0;j<r;j++)
				{
					if(i<j)
					{
					printf("%d",a[i][j]);
					}
				printf("\t");
				}
			printf("\n");
			}
		//display lower triangular prime diagonal element
		printf("\nLower triangular prime diagonal element is:\n");
			for(i=0;i<c;i++)
			{
				for(j=0;j<r;j++)
				{
					if(i>j)
					{
					printf("%d",a[i][j]);
					}
				printf("\t");
				}
			printf("\n");
			}

		//display secondary diagonal element
		printf("\nSecondary diagonal is:\n");
			for(i=0;i<c;i++)
			{
				for(j=0;j<r;j++)
				{
					if((i+j)==(r-1))
					{
					printf("%d",a[i][j]);
					}
				printf("\t");
				}
			printf("\n");
			}

		//display upper triangular secondary diagonal element
		printf("\nUpper triangular secondary diagonal is:\n");
			for(i=0;i<c;i++)
			{
				for(j=0;j<r;j++)
				{
					if((i+j)<(r-1))
					{
					printf("%d",a[i][j]);
					}
				printf("\t");
				}
			printf("\n");
			}

		//display lower triangular secondary diagonal element
		printf("\nLower triangular secondary diagonal is:\n");
			for(i=0;i<c;i++)
			{
				for(j=0;j<r;j++)
				{
					if((i+j)>(r-1))
					{
					printf("%d",a[i][j]);
					}
				printf("\t");
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

/*
	12	23	34	56

	67	43	59	12

	23	11	26	33

	17	82	43	55

	prime diagonal : i == j	[00	11	22	33]
				[12	43	26	55]

	secondary diagonal : prime diagonal : i + j == r-1
				[03	12	21	30]
				[56	59	11	17]

	lower triangular matrix (elements below prime diagonal)
			i > j

			[-	-	-	-]
			[67	-	-	-]
	values : 	[23	11	-	-]
			[17	82	43	-]

			[-	-	-	-]
			[10	-	-	-]
	condition :	[20	21	-	-]
			[30	31	32	-]


	upper triangular matrix (elements above prime diagonal)
			i < j

			[-	23	34	56]
			[-	-	59	12]
	values : 	[-	-	-	33]
			[-	-	-	- ]

			[-	01	02	03]
			[-	-	12	13]
	condition :	[-	-	-	23]
			[-	-	-	- ]

*/