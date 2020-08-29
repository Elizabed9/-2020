#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float g = 0,x,y;
    int count = 0;
    printf ("Vvodite X  ");
    scanf ("%f",&x);
    printf ("Vvodite Y  ");
    scanf ("%f",&y);

    g = (x*x)+(y*y);
    if ((g < pow(5,2)) && (g > pow(2,2)) && (x > 0) && (y > 0))
        {
            printf ("Popadae\n");
            count++;
        }
    if ((g < pow(5,2)) && (g > pow(2,2)) && (x < 0) && (y < 0))
        {
            printf ("Popadae\n");
            count++;
        }

        if (count == 0)
            printf ("Ne Popadae\n");

    printf ("\n");
    system ("pause");
    return 0;
}