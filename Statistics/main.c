/**
 * Required Headers
 **/
#include <stdio.h>
#include <sys/_types/_int16_t.h>
#include "statistics.h"

/**
 * MACROS
 **/
#define FLOAT_ARRAY_SIZE(x) (sizeof(x)/sizeof(float))

/**
 * Local variables
 **/
static float Data[5] = {9.0, 14.0, 18.0, 13.0, 16.0};
static float Average = 0.0, MaxValue = 0.0, MinValue = 0.0;

/**
 * Local prototype functions
 **/
static void vPrintArrayData( float *pData, uint16_t DataSize );

int main(void)
{
    Average = fStatistics_Average(Data, FLOAT_ARRAY_SIZE(Data) );
    MaxValue = fStatistics_GetMaxValue(Data, FLOAT_ARRAY_SIZE(Data));
    MinValue = fStatistics_GetMinValue(Data, FLOAT_ARRAY_SIZE(Data));

    vPrintArrayData(Data, FLOAT_ARRAY_SIZE(Data));

    puts("\nResultados");
    printf("Promedio: %.2f \n", Average);
    printf("Valor Maximo: %.2f \n", MaxValue);
    printf("Valor Minimo: %.2f \n", MinValue);

    return 0;
}

/**
 * Local functions
 **/
static void vPrintArrayData( float *pData, uint16_t DataSize )
{
    printf("Data: [ ");
    for(int itr = 0; itr < DataSize; itr++)
    {
        printf("%.2f ", (*pData));
        pData++;
    }
    printf("]\n");
    printf("Data Size: %i\n", DataSize);
}