#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main ()
{
    srand(time(NULL));
    int i,j,count = 0,sum = 0,max = -10;
    int d[5][5];
    
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
            {
                d[i][j] = rand()% 20-5;
                printf ("%4.2d",d[i][j]);
            }         
        printf ("\n\n");
    }

    for ( i = 0; i < 5; i++)
    {
        count = 0;
        for ( j = 0; j < 5; j++)
        {
            if (d[i][j] < 0)
            {
                count++;
            }    
        }
        
        for ( j = 0; j < 5; j++)
        {
            if (count > 0)
            {
                if (i == j)
                {
                    sum += d[i][j];
                    if (d[i][j] > max)
                    {
                        max = d[i][j];
                    }
                    
                }    
            }    
        }
    }
    
    printf ("\nSum of all number from diagonal (with negative elements) %d",sum);
    printf ("\nMax diagonal element (with negative elements):  %d",max);

    printf ("\n");
    system ("pause");
    return 0;
}