#ifndef _MATHC_H_
#define _MATHC_H_

/* ------------------------------------------------
* ANSI C Includes
* ------------------------------------------------ */
#include <stdio.h>
#include <stdlib.h>

/* ------------------------------------------------
* Defines
* ------------------------------------------------ */
#define MATH_PI (3.141592653L)

/* ------------------------------------------------
 * Prototype Functions
 * ------------------------------------------------ */
int16_t iMath_Add(int16_t a, int16_t b);
int16_t iMath_Sub(int16_t a, int16_t b);
int16_t iMath_Multp(int16_t a, int16_t b);
float   fMath_Division(int16_t a, int16_t b);
int16_t iMath_ArrayOperation(int16_t *buffer, uint8_t size);
int32_t iMath_MultpArray(int32_t *buffer, uint8_t size);
int16_t iMath_Pow(int8_t n, int8_t x);

#endif // _MATHC_H_
