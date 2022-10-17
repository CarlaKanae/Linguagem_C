#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c = 0, f;

    for(f = 0 ; f <= 100 ; f++)
    {
        printf(" Farenheit = %.0f  Celsiun = %.2f \n", f, c = (f - 32)/1.8);
    }

    return 0;
}
