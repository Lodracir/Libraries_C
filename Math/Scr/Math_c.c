// Calculator Header Include
#include "math_c.h"

//
static void CalculatorInit(mathFunction_t *mathFcn);

// Prototype Static Functions
static int16_t MathSimpleAdd(int16_t a, int16_t b);                          // Suma de dos valores
static int16_t MathArrayAdd(int16_t *buffer, uint8_t size);                   // Suma de 3 o mas valores
static int16_t MathSimpleSub(int16_t a, int16_t b);                          // Resta de dos valores
static int16_t MathArraySub(uint16_t *buffer, uint8_t size);                   // Resta de 3 o mas Variables
static void     CalcSub(uint8_t a, uint8_t b, calc_results_t *resultStruct);
static void     CalcMul(uint8_t a, uint8_t b, calc_results_t *resultStruct);
static void     CalcDiv(uint8_t a, uint8_t b, calc_results_t *resultStruct);
static uint16_t MathPow(uint8_t n, uint8_t x);

// Functions
void CalculatorBegin(void)
{
    CalculatorInit(&math);
}


static void CalculatorInit(mathFunction_t *mathFcn)
{

    // Assign functions
    mathFcn->simpleAdd  = MathSimpleAdd;
    mathFcn->arrayAdd   = MathArrayAdd;
    mathFcn->simpleSub  = MathSimpleSub;
    mathFcn->mul        = CalcMul;
    mathFcn->div        = CalcDiv;
    mathFcn->pow        = MathPow;

}


// Static Functions

static int16_t MathSimpleAdd(int16_t a, int16_t b)
{
    return a + b;
}

static int16_t MathArrayAdd(int16_t *buffer, uint8_t size)
{

    // Local Variables
    uint8_t  itr = 0;
    int16_t result = 0;
    int16_t *ptr = NULL;
    
    // Puntero apuntando al buffer
    ptr = buffer;
    
    for( itr = 0; itr < size; itr++ )
    {
        
        result += (*ptr);
        ptr++;
        
    }
    
    ptr = NULL;
    
    return result;
    
}


static int16_t MathSimpleSub(int16_t a, int16_t b)
{
    return a - b;
}


static int16_t MathArraySub(uint16_t *buffer, uint8_t size);                   

static void CalcSub(uint8_t a, uint8_t b, calc_results_t *resultStruct)
{
    // Sub operation
    resultStruct->sub = a - b;
}

static void CalcMul(uint8_t a, uint8_t b, calc_results_t *resultStruct)
{
    // Mul operation
    resultStruct->mul = a * b;
}

static void CalcDiv(uint8_t a, uint8_t b, calc_results_t *resultStruct)
{

    if(b == 0)
    {
        printf("Sintax Error\n");
    }
    else
    {
        resultStruct->div = (float)a / (float)b;
    }

}

static uint16_t MathPow(uint8_t n, uint8_t x)
{
    
    //Local Variables
    int itr = 0;
    uint16_t result = 1;
    
    for( itr = 1; itr <= x; itr++)
    {
        result *= n;
    }
    
    return result;
}