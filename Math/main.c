/**
 * Required Headers
 **/
#include <stdio.h>
#include <stdint.h>
#include "MathC.h"

/**
 * Global variables
 **/
int16_t result = 0;

int main(void)
{
    printf("MATH Test Program\n");

    result = iMath_Add(5,2);

    printf("Number: %i\n", result);

    return 0;
}