#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    char txt[60];
    int x,amount=0,i;
    printf ("Input name surname  and POBATYKOVI\n");
    gets(txt);
    
    x = strlen(txt);
    printf ("How many letters - %d",x);

    int count = 0;
    for (int i = 0; i < x; i++)
    {
        if (txt[i] == 'a')
           count++;
    }
    printf ("\nAmount of a - %d\n\n",count);
    
    
    printf ("Name:");
    int k=0;
    for ( int i = 0; i < x; i++)
    {
        if (txt[i] == ' ')
            k++;
        
        if (k==1)
            printf ("%c\n",txt[i]);

        if (k==2)
            {   
                i++; 
                k++;
            }
    }
    char *token;
    token = strtok(txt," ");
    token = strtok(NULL," ");
    printf ("Name: \n");
    for ( i = 0; i < strlen(token); i++)
    {
        printf( "%c\n", token[i]);
    }

	printf ("\n");
	system ("pause");
	return 0;
}
