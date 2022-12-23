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
 * @Name:   iMath_Add
 * @brief:  Add two numbers
 * @values: int16_t a , int16_t b
 * @return: int16_t result
 */
int16_t iMath_Add(int16_t a, int16_t b)
{
    return a + b;
}


/*
 * @Name:   iMath_Sub
 * @brief:  Substract two number
 * @values: int16_t a , int16_t b
 * @return: int16_t result
 */
int16_t iMath_Sub(int16_t a, int16_t b)
{
    return a - b;
}


/*
 * @Name:   iMath_Multp
 * @brief:  Multiply two number
 * @values: int16_t a , int16_t b
 * @return: int16_t result
 */
int16_t iMath_Multp(int16_t a, int16_t b)
{
    return a * b;
}


/*
 * @Name:   fMath_Division
 * @brief:
 * @values:
 * @return:
 */
float fMath_Division(int16_t a, int16_t b)
{
    if( b == 0 )
    {
        return 0.0;
    }

    return (float)a / (float)b;
}


/*
 * @Name:   iMath_ArrayOperation
 * @brief:
 * @values:
 * @return:
 */
int16_t iMath_ArrayOperation(int16_t *buffer, uint8_t size)
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
 * @Name:   iMath_MultpArray
 * @brief:  Multiply all number inside array
 * @values: 1.-Pointer to integer 32 bit data
 *          2.-Size of buffer/array
 * @return: Result of multiplication
 */
int32_t iMath_MultpArray(int32_t *buffer, uint8_t size)
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
 * @Name:   iMath_Pow
 * @brief:
 * @values:
 * @return:
 */
int16_t iMath_Pow(int8_t n, int8_t x)
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
