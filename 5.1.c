#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main ()
{
    srand(time(NULL));
    int i,j,n = 3;
    int a[n][n];
    
    printf ("Array\n");
    
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
            {
                *(*(a+i)+j) = rand()% 25-5;  
                printf ("%4.2d",*(*(a+i)+j));  
            }         
        printf ("\n\n");
    }

    printf ("\n\n");
    printf ("Array  +2 \n");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
            {
                *(*(a+i)+j) += 2;  
                printf ("%4.2d",*(*(a+i)+j));  
            }         
        printf ("\n\n");
    }


    printf ("\n");
    system ("pause");
    return 0;
}