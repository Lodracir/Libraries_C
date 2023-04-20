/** Required Headers **/
#include <stdio.h>
#include <stdint.h>
#include "MathC.h"

/**
 * Global variables
 **/
int16_t result = 0, powResult = 0;

int main(void)
{
    printf("MATH Test Program\n");

    result = iMath_Add(5,2);
    powResult = iMath_Pow(2,2);

    printf("Resultado de la suma: %i\n", result);
    printf("Resultado de 2^2: %i\n", powResult);

    return 0;
}