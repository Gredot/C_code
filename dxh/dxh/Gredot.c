#include<stdio.h>
int main ()
{
	for (int j = 1; j < 5; j++)
	{	

		printf("%d%d%d\n",j,j+1,j+2);
		printf("%d%d%d\n",j,j-1,j-2);
		printf("%d%d%d\n",j,j+1,j+2);
		printf("%d%d%d\n",j,j+1,j+2);
		printf("%d%d%d\n",j,j+1,j+2);
	}
	return 0;
}