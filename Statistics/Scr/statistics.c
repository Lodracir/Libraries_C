// Library Include
#include "statistics.h"

//
static void StatisticsInit(statistics_t *stats);

//
static void LIB_MEAN(int16_t *valuesArray, uint16_t n, float *result);

// 

void StatisticsBegin(void)
{
    StatisticsInit(&stats);
}

static void StatisticsInit(statistics_t *stats)
{
    stats->mean = LIB_MEAN;
}

// Functions
static void LIB_MEAN(int16_t *valuesArray, uint16_t n, float *result)
{
    // local Variables
    int itr = 0;
    int16_t *ptr = NULL;
    
    if(n < 2)
    {
        (*result) = 0;
    }
    else
    {
        
        (*result) = 0;
        ptr = valuesArray;
    
        for(itr = 0; itr < n; itr++)
        {
            (*result) += (float)(*ptr);
            ptr++;
        }
    
        ptr = NULL;
        (*result) = (*result)/(float)n;
        
    }

    
}