#ifndef _MATH_C_H_
#define _MATH_C_H_

/* ------ ANSIC Includes ------ */
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
mathFunction_t Math;

/* ------ Prototype Functions ----- */
void Math_Init(void);
void Math_DeInit(void);

#endif // _MATH_C_H_
