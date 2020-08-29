#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    srand(time(NULL));
	int k=6,n=5,i,j,min = 1000,index_min = 0, max = 0, index_max = 0;
	int a[k][n];
    int array[k];

printf ("                Candidates     \n");
printf ("        [1]   [2]   [3]   [4]   [5]  \n");
printf ("      _____________________________\n");
    for (int i = 0; i < k; i++)
    {
        printf ("[%d]   ",i+1);
        for (int j = 0; j < n; j++)
        {
            a[i][j]=rand()%60+1;
            printf ("%5.2d ",a[i][j]);
        }
        printf ("\n      \n");
    }

    for ( i = 0; i < k; i++)
    {
        if (a[i][0] < min)
        {
            min = a[i][0];
            index_min = i+1;
        }
        
        if (a[i][0] > max)
        {
            max = a[i][0];
            index_max = i+1;
        }
    }
    
    printf ("\nMin [%d] posiolok = %d",index_min,min);
    printf ("\nMax [%d] posiolok = %d",index_max,max);

	printf ("\n");
	system ("pause");
	return 0;
}
