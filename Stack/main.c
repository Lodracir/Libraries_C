#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct
{
    void *Buffer;
    uint16_t Size;

}Stack_t;

typedef struct
{
    uint8_t  *pBuffer;
    uint16_t Size;
    uint16_t Position;
    uint16_t Limit;
}Stack_u8_t;

void StackCreate(Stack_t *Stack, uint32_t Size);
void StackCreateu8(Stack_u8_t *Stack, uint8_t *pData, uint16_t Size);
void Stack_AddData_u8(Stack_u8_t *Stack, uint8_t Data);
uint8_t Stack_ReadData_u8(Stack_u8_t *Stack);

#define STACK_SIZE  10

uint8_t Data = 15;
uint8_t StackData[STACK_SIZE] = {0};
Stack_u8_t StackStruct;

int main() {

    //Create Stack structure
    StackCreateu8(&StackStruct, StackData, STACK_SIZE);

    for(int i = 0; i < STACK_SIZE + 5 ;i++) {
        Stack_AddData_u8(&StackStruct, Data);
        Data = Data + 5;
    }

    return 0;
}

void StackCreate(Stack_t *Stack, uint32_t Size)
{
    Stack->Buffer = malloc(Size);
}

void StackCreateu8(Stack_u8_t *Stack, uint8_t *pData, uint16_t Size)
{
    /* Assign data */
    Stack->pBuffer  = pData;
    Stack->Size     = Size;
    Stack->Position = 0;
    Stack->Limit    = Size;
}

void Stack_AddData_u8(Stack_u8_t *Stack, uint8_t Data)
{
    if( Stack->Position == Stack->Limit )
    {
        puts("Stack is full");
    }
    else
    {
        Stack->pBuffer[Stack->Position] = Data;
        Stack->Position++;
    }
}

uint8_t Stack_ReadData_u8(Stack_u8_t *Stack)
{
    /** Local Variables **/
    uint8_t Temp = 0;

    if( Stack->Position == 0 )
    {
        puts("Stack is empty");
    }
    else
    {
        Temp = Stack->pBuffer[Stack->Position - 1];
        Stack->Position--;
    }

    return Temp;
}