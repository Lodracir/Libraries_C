#ifndef _STATISTICS_H_
#define _STATISTICS_H_

// ANSI C Libraries
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <math.h>

float StatisticsMean( int16_t *valuesArray, uint16_t n );
float StatisticsSTD(void);

#endif // _STATISTICS_H_