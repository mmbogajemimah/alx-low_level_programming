// Headers
# include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Declaring Variables
    int height;
    int i;
    int j;
    int k;
    //Prompting user for correct input
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // Loop that prints out the columns
    for (i = 1; i < height + 1; i++)
    {
        // Loop that prints out the spaces on the rows
        for (j = 0; j < height - i; j++)
        {
            printf(" ");
        }
        // Loop that prints out the # on the rows
        for (k = 0; k < height - j; k++)
        {
            printf("#");
        }
        printf("\n");
    }

}
