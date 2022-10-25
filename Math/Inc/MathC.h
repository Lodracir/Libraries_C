#ifndef _MATHC_H_
#define _MATHC_H_

/* ------------------------------------------------
* ANSI C Includes
* ------------------------------------------------ */
#include <stdio.h>
#include <stdlib.h>

/* ------ Math Function Structure ------ */
typedef struct
{
    
    // Simple Math Operations
    int16_t     (*Add)(int16_t a, int16_t b);
    int16_t     (*Sub)(int16_t a, int16_t b);
    int16_t     (*Multp)(int16_t a, int16_t b);
    float       (*Div)(int16_t a, int16_t b);
    
    // Array Math Operations
    int16_t     (*ArrayOp)(int16_t *buffer, uint8_t size);
    int32_t     (*ArrayMultp)(int32_t *buffer, uint8_t size);
   
    // Other Math Operations
    int16_t     (*Pow)(int8_t n, int8_t x)

}mathFunction_t;

/* ------ Math structure definition ------ */
extern mathFunction_t Math;

/* ------------------------------------------------
 * Prototype Functions
 * ------------------------------------------------ */
int16_t MathAdd(int16_t a, int16_t b);
int16_t MathSub(int16_t a, int16_t b);
int16_t MathMultp(int16_t a, int16_t b);
float   MathDivision(int16_t a, int16_t b);
int16_t MathArrayOperation(int16_t *buffer, uint8_t size);
int32_t MathMultpArray(int32_t *buffer, uint8_t size);
int16_t MathPow(int8_t n, int8_t x);

#endif // _MATHC_H_
