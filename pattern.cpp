#include<stdio.h>
int main()
{
	int totalRows=5;
	int row,colSpace,colStar,i;

	for(row=1;row<=totalRows;row++){
	for(colSpace=totalRows-row;colSpace>=1;colSpace--)
	{
		printf("*");
	}
	for(colStar=1;colStar<=2*row-1;colStar++)
	{
		printf(" ");
	}
	for(colSpace=totalRows-row;colSpace>=1;colSpace--)
	{
		printf("*");
	}

	for(colStar=1;colStar<=2*row-1;colStar++)
	{
		printf(" ");
	}
	for(colSpace=totalRows-row;colSpace>=1;colSpace--)
	{
		printf("*");
	}
	printf("\n");
}


for(row=totalRows-1;row>=1;row--){
	for(colSpace=1;colSpace<=totalRows-row;colSpace++)
	{
		printf("*");
	}
	for(colStar=1;colStar<=2*row-1;colStar++)
	{
		printf(" ");
	}
	for(colSpace=1;colSpace<=totalRows-row;colSpace++)
	{
		printf("*");
	}
		for(colStar=1;colStar<=2*row-1;colStar++)
	{
		printf(" ");
	}
	for(colSpace=1;colSpace<=totalRows-row;colSpace++)
	{
		printf("*");
	}
	printf("\n");
}

return 0;
}
