// Library Include
#include "statistics.h"

// Functions
float StatisticsMean( int16_t *valuesArray, uint16_t Size );
{
    // local Variables
    float result = 0.0;
    int itr = 0;
    int16_t *ptr = NULL;
    
    if( Size < 2 )
    {
       return 0;
    }
    else
    {
        result = 0;
        ptr = valuesArray;
    
        for( itr = 0; itr < Size; itr++ )
        {
            result += (float)(*ptr);
            ptr++;
        }
    
        ptr = NULL;
        return (*result)/(float)Size;
    }
}