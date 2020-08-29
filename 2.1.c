#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main ()
{
    srand(time(NULL));
    int i,sum = 0,min = 20,max = -10;
    int q[12];

    printf ("Array Q: \n");

    for ( i = 0; i < 12; i++)
    {
        q[i] = rand()% 20-6;
        printf ("%d   ",q[i]);    

        if (q[i] > max)
        {
            max = q[i];
        }
        
        if (q[i] < min)
        {
            min = q[i];
        }
    }

    sum = min + max;

    printf ("\nChanged Array: \n");
    for ( i = 0; i < 12; i++)
    {
        if (q[i] > 0 )
        {
            q[i] = q[i] / sum;
        }
        printf ("%d   ",q[i]); 
    }

    printf ("\nMin - %d",min);
    printf ("\nMax - %d",max);

    printf ("\n");
    system ("pause");
    return 0;
}