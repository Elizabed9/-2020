#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main ()
{
    srand(time(NULL));
    int i,j,min = 5000, index = 0,dobutok = 1;
    int f[5][5];
    int a[5];

    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
            {
                f[i][j] = rand()% 20-5;
                printf ("%4.2d",f[i][j]);
            }         
        printf ("\n\n");
    }

    for ( j = 0; j < 5; j++)
    {
        dobutok = 1;
        for ( i = 0; i < 5; i++)
            {
                if (f[i][j] > 0)
                {
                    dobutok = dobutok * f[i][j];
                }    
            }     
        a[j] = dobutok;   
    }

    for ( j = 0; j < 5; j++)
        {
            if (a[j] < min)
            {
                min = a[j];
                index = j;
            }
            printf ("[%d] = %d\n",j+1,a[j]);          
        }     

    printf ("\nMin: [%d] = %d",index+1,min);


    printf ("\n");
    system ("pause");
    return 0;
}