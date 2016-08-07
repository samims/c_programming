#include <stdio.h>

int main(int argc, char const *argv[])
{
	int rows, columns, a[50] [50],b[50][50], sum[50][50], x,y;

	printf("Enter number of rows(between 1 to 50)\n");
	scanf("%d",&row);
	printf("Enter number of columns(between 1 to 50)\n");
	scanf("%d",columns);

	printf("Enter the element of first matrix:\n");

	for (int x = 0; x < row; ++x)
	{
		for (int y = 0; y < columns; ++y)
		{
			printf("Enter element a%d%d\n",x+1,y+1 );
			scanf("%d"&a[x][y])
		}
	}

	printf("Enter elements of 2nd matrix:\n");
    for(x=0;x<rows;++x)
       	for(y=0;y<columns;++y)
		{
           	printf("Enter element a%d%d: ",y+1,y+1);
           	scanf("%d",&b[x][y]);
       	}
     
   for(i=0;i<r;++i)
   {
       for(j=0;j<c;++j)
       {
           sum[i][j]=a[i][j]+b[i][j];
       }
   	}
    printf("\nSum of two matrix is: \n\n");
    for(i=0;i<r;++i)
       for(j=0;j<c;++j)
       {
           printf("%d  ",sum[i][j]);
           if(j==c-1)
               printf("\n\n");
       }


	return 0;
}

