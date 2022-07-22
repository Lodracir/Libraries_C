#ifndef _STATISTICS_H_
#define _STATISTICS_H_

// ANSI C Libraries
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <math.h>

// Functions Typedef struct
typedef struct
{
    
    void    (*mean)(int16_t *valuesArray, uint16_t n, float *result);
    
}statistics_t;

// 
statistics_t stats;

// Prototype Function
void StatisticsBegin(void);

#endif // _STATISTICS_H_