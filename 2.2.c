#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main ()
{
    srand(time(NULL));
    int i,j,dobutok = 1,count = 0,maximum = 0,index = 0;
    int x[10];
    int max[3];

    for ( i = 0; i < 10; i++)
    {
        x[i] = rand()% 25-5;
        printf ("%d   ",x[i]);   
    }

for ( j = 0; j < 3; j++)
{
    maximum = 0;
    for ( i = 0; i < 10; i++)
    {
        if (x[i]>maximum)
        {
            maximum = x[i];
            index = i;
        }
    }
    max[j] = x[index];
    x[index] = 0;
}

printf ("\n\n");
for ( j = 0; j < 3; j++)
    {
        dobutok = dobutok * max[j];
        printf ("Max [%d] = %d \n",j+1,max[j]);
    }

    printf ("\nDobutok = %d",dobutok);

    printf ("\n");
    system ("pause");
    return 0;
}