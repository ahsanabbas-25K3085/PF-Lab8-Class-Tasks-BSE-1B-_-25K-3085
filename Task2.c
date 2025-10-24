#include<stdio.h>
int main()
{
	int arr[3][4]=
	{ 
	{10,22,35,4}, 
	{50,65,73,80},
	{91,10,11,12} 
	} ;

	int i,j ,max=0 ,row,col;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			if(max<arr[i][j])
			{
				max=arr[i][j];
	             row=i;
	             col=j;
			}
			
		}
	}
	printf("Maximum is %d at Index[%d,%d ]",max,row,col);

	return 0;
}

