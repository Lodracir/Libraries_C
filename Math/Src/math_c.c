/* ------ Math Include ------ */
#include "math_c.h"

/* ------ Static Local Functions ------ */
static int16_t Math_Add(int16_t a, int16_t b);      
static int16_t Math_Sub(int16_t a, int16_t b);      
static int16_t Math_Multp(int16_t a, int16_t b);              
static float   Math_Division(int16_t a, int16_t b);   
static int16_t Math_ArrayOperation(int16_t *buffer, uint8_t size);
static int32_t Math_MultpArray(int32_t *buffer, uint8_t size);      
static int16_t Math_Pow(int8_t n, int8_t x);                      


/****************************************************************************
 *                                                                          *
 *                               Functions                                  *
 *                                                                          *
 ****************************************************************************/

/*
 * @Name;   Math Init
 * @brief:  Init Math object driver
 * @values: None (void)
 * @return: None (void)
 */
void Math_Init(void)
{

    // Allocate functions
    Math->Add           = Math_Add;
    Math->Sub           = Math_Sub;
    Math->Multp         = Math_Multp;
    Math->Div           = Math_Division;
    Math->ArrayOp       = Math_ArrayOperation;    
    Math->ArrayMultp    = Math_MultpArray;
    Math->Pow           = Math_Pow;

}

/*
 * @Name: Math Deinit
 * @brief: Deinit (deallocate) Math object driver
 * @values: None (void)
 * @return: None (void)
 */
void Math_DeInit(void)
{

    // Deallocate functions
    Math->Add           = NULL;
    Math->Sub           = NULL;
    Math->Multp         = NULL;
    Math->Div           = NULL;
    Math->ArrayOp       = NULL;    
    Math->ArrayMultp    = NULL;
    Math->Pow           = NULL;

}


/****************************************************************************
 *                                                                          *
 *                        Static Functions                                  *
 *                                                                          *
 ****************************************************************************/


/*
 * @Name: Math Add
 * @brief: Add two numbers
 * @values: int16_t a , int16_t b
 * @return: int16_t result
 */
static int16_t Math_Add(int16_t a, int16_t b)
{
    return a + b;
}


/*
 * @Name: Math Sub
 * @brief: Substract two number
 * @values: int16_t a , int16_t b
 * @return: int16_t result
 */
static int16_t Math_Sub(int16_t a, int16_t b)
{
    return a - b;
}


/*
 * @Name: Math Multp
 * @brief: Multiply two number
 * @values: int16_t a , int16_t b
 * @return: int16_t result 
 */
static int16_t Math_Multp(int16_t a, int16_t b)
{
    return a * b;
}


/*
 * @Name:
 * @brief:
 * @values:
 * @return:
 */
static float   Math_Division(int16_t a, int16_t b)
{

    // If a is 0, then return 0 due its not 
    // possible to div x/0
    if( b == 0 )
    {
        return 0;
    }

    return (float)a / (float)b;

}


/*
 * @Name:
 * @brief:
 * @values:
 * @return:
 */
static int16_t Math_ArrayOperation(int16_t *buffer, uint8_t size)
{

    // Local Variables
    uint8_t itr = 0;
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


/*
 * @Name:
 * @brief:
 * @values:
 * @return:
 */
static int32_t Math_MultpArray(int32_t *buffer, uint8_t size)
{

    // Local Variables
    uint8_t itr = 0;
    int32_t result = 1;
    int32_t *ptr = NULL;
    
    // Puntero apuntando al buffer
    ptr = buffer;
    
    for( itr = 0; itr < size; itr++ )
    {
        
        result *= (*ptr);
        ptr++;
        
    }
    
    ptr = NULL;
    
    return result;


}


/*
 * @Name:
 * @brief:
 * @values:
 * @return:
 */ 
static int16_t Math_Pow(int8_t n, int8_t x)
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
