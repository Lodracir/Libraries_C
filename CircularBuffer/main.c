/**
 * ANSI C Headers
 **/
#include <stdio.h>
#include <stdint.h>

/**
 * Custom Libraries
 **/
#include "CircularBuffer.h"

/**
 * Defines
 **/
#define BUFFER_SIZE             10

/**
 * Global Variables
 **/
CircularBuffer_t Buffer;
uint8_t BufferData[BUFFER_SIZE] = {0};
uint8_t ReadByte = 0;

uint8_t Data2beStored[15] = { 1, 2, 3, 4, 5, 6,7, 8, 9, 10, 11, 12, 13, 14, 15 };

/**
 * Main function
 **/
int main() {

    /** Local Variables **/
    uint32_t itr;

    printf("Circular Buffer Program Test\n");
    printf("Buffer size: %li\n", (long int)BUFFER_SIZE );

    CircBuffer_Create(&Buffer, BufferData, BUFFER_SIZE);

    for( itr = 0; itr < sizeof(Data2beStored); itr++ )
    {
        CircBuffer_WriteData(&Buffer, Data2beStored[itr]);
    }

    /** Print buffer data **/
    puts("Buffer Data:");
    for( itr = 0; itr < BUFFER_SIZE; itr++ )
    {
        ReadByte = CircBuffer_ReadByte(&Buffer);
        printf("%i ",ReadByte);
    }

    return 0;
}

