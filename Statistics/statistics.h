#ifndef _STATISTICS_H_
#define _STATISTICS_H_

// ANSI C Libraries
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <math.h>

/**
 * Prototype Functions
 **/
float fStatistics_Average( float *pData, uint16_t DataSize );
float fStatistics_GetMaxValue( float *pData, uint16_t DataSize );
float fStatistics_GetMinValue( float *pData, uint16_t DataSize );
float StatisticsSTD(void);

#endif // _STATISTICS_H_