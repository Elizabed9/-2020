#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main ()
{
    srand(time(NULL));
    int i,j,min = 20,max = -20,count = 0,dobutok = 1,k = 0;
    int n = 3,m = 4,index_min = 0,index_max = 0;
    int a[n][m];
    int b[m];
    int c[m];
    
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < m; j++)
            {
                a[i][j] = rand()% 20-5;  
                //scanf ("%d",&a[i][j]);
                printf ("%4.2d",a[i][j]);  
            }         
        printf ("\n\n");
    }

    for ( j = 0; j < m; j++)
    {   
        min = 20;
        max = -20;
        dobutok = 1;
        for ( i = 0; i < n; i++)
            {
                if (a[i][j] < min)
                {
                    min = a[i][j];
                    index_min = i;
                }
                if (a[i][j] > max)
                {
                    max = a[i][j];
                    index_max = i;
                } 
            }      
        for ( count = 0; count < m; count++)
            {
                c[i] = a[index_min][count] * a[index_max][count];
                dobutok = dobutok * c[i];
            }   
        b[k] = dobutok;
        k++;
    } 

printf ("\n");
for ( i = 0; i < m; i++)
{
    printf ("%d  ",b[i]);
}

    printf ("\n");
    system ("pause");
    return 0;
}