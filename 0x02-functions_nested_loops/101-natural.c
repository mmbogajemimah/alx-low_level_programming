#include <stdio.h>
/**
 * main - Starting point
 */
int main(void)
{
    int i;
    int x;
    
    for (i = 0; i < 1024; i++)
    {
        if(i % 3 == 0 || i % 5 == 0)
        {
            x = x + i;
        }
    }
    printf("%d\n", x);
}
