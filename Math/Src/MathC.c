/* ------------------------------------------------
* Required Headers
* ------------------------------------------------ */
#include "MathC.h"

/* ------------------------------------------------
* Local Variables
* ------------------------------------------------ */

/* ------------------------------------------------
* Public Functions
* ------------------------------------------------ */

/*
 * @Name: Math Add
 * @brief: Add two numbers
 * @values: int16_t a , int16_t b
 * @return: int16_t result
 */
static int16_t MathAdd(int16_t a, int16_t b)
{
    return a + b;
}


/*
 * @Name: Math Sub
 * @brief: Substract two number
 * @values: int16_t a , int16_t b
 * @return: int16_t result
 */
static int16_t MathSub(int16_t a, int16_t b)
{
    return a - b;
}


/*
 * @Name: Math Multp
 * @brief: Multiply two number
 * @values: int16_t a , int16_t b
 * @return: int16_t result
 */
static int16_t MathMultp(int16_t a, int16_t b)
{
    return a * b;
}


/*
 * @Name:
 * @brief:
 * @values:
 * @return:
 */
static float MathDivision(int16_t a, int16_t b)
{
    if( b == 0 )
    {
        return 0.0;
    }

    return (float)a / (float)b;
}


/*
 * @Name:
 * @brief:
 * @values:
 * @return:
 */
static int16_t MathArrayOperation(int16_t *buffer, uint8_t size)
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
static int32_t MathMultpArray(int32_t *buffer, uint8_t size)
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
static int16_t MathPow(int8_t n, int8_t x)
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
