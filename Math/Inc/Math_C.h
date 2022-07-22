#ifndef _MATH_C_H_
#define _MATH_C_H_

// ANSIC Includes
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef struct 
{
    int16_t add;
    int16_t sub;
    int16_t mul;
    float   div;

}calc_results_t;

// Typedef Structure
typedef struct
{
    
    int16_t    (*simpleAdd)(int16_t a, int16_t b);
    int16_t    (*arrayAdd)(int16_t *buffer, uint8_t size);
    int16_t    (*simpleSub)(int16_t a, int16_t b);
    void        (*mul)(uint8_t a, uint8_t b, calc_results_t *resultStruct);
    void        (*div)(uint8_t a, uint8_t b, calc_results_t *resultStruct);
    uint16_t    (*pow)(uint8_t n, uint8_t x)

}mathFunction_t;

//
mathFunction_t math;

//Prototype Functions
void CalculatorBegin(void);

#endif // _MATH_C_H_