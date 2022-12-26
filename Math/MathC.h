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
#define MATH_PI (3.141592653F)

/* ------------------------------------------------
 * Prototype Functions
 * ------------------------------------------------ */

// Integer operations
int16_t iMath_Add(int16_t a, int16_t b);
int16_t iMath_Sub(int16_t a, int16_t b);
int16_t iMath_Multp(int16_t a, int16_t b);
int16_t iMath_ArrayOperation(int16_t *buffer, uint8_t size);
int32_t iMath_MultpArray(int32_t *buffer, uint8_t size);
int16_t iMath_Pow(int8_t n, int8_t x);

// Float operations
float fMath_Add(float a, float b);
float fMath_Sub(float a, float b);
float fMath_Multp(float a, float b);
float fMath_ArrayOperation(float *buffer, float size);
float fMath_MultpArray(float *buffer, float size);
float fMath_Pow(float n, int8_t x);

// Division operations
float fMath_Division(float a, float b);

#endif // _MATHC_H_
