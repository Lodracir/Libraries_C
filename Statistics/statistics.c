// Library Include
#include "statistics.h"

/**
 * Static prototype functions
 **/
static void SortData_MinToMax(void);

/**
 * Public functions
 **/
 
float fStatistics_Average( float *pData, uint16_t DataSize )
{
    // local Variables
    float result = 0.0;
    int itr = 0;
    
    if( DataSize < 2 )
    {
       return 0;
    }
    else
    {
        result = 0;
    
        for( itr = 0; itr < DataSize; itr++ )
        {
            result += (*pData);
            pData++;
        }
    
        return ( result/(float)DataSize );
    }
}

float fStatistics_GetMaxValue( float *pData, uint16_t DataSize )
{
    //Local Variables
    float result = 0.0;
    int itr = 0;

    for(itr = 0;itr < DataSize;itr++)
    {
        if( (*pData) > result )
        {
            result = (*pData);
        }
        pData++;
    }

    return result;
}

float fStatistics_GetMinValue( float *pData, uint16_t DataSize )
{
    //Local Variables
    float result = (*pData);
    int itr = 0;

    for(itr = 0;itr < DataSize;itr++)
    {
        if( (*pData) < result )
        {
            result = (*pData);
        }
        pData++;
    }

    return result;
}