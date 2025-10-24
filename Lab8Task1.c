#include<stdio.h>
int main()
{
	int num,i,j;
	printf(" Enter the Range:");
	scanf("%d",&num);
	printf("\nMultiplication Tables \n");
	for(i=1;i<=num;i++)
	{
     printf("%d: \t",i); 
       	
		for(j=1;j<=num;j++)
		{
		
			printf("%4d",i*j);
		}
		
		printf("\n");
	}
	return 0;
}
