#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main ()
{
    srand(time(NULL));
    int i,j,max = -30, min = 30;
    int a[7][7];

    for ( i = 0; i < 7; i++)
    {
        for ( j = 0; j < 7; j++)
            {
                a[i][j] = rand()% 20+1;
                printf ("%4.d",a[i][j]);

                if (i == 0)
                {
                    if (a[i][j] > max)
                    {
                        max = a[i][j];
                    }    
                }

                if (i == 6)
                {
                    if (a[i][j] < min)
                    {
                        min = a[i][j];
                    }    
                }      
            }         
        printf ("\n\n");
    }

    printf ("\nMax = %d",max);
    printf ("\nMin = %d",min);
    printf ("\nDifference = %d",max-min);
    
    printf ("\n");
    system ("pause");
    return 0;
}