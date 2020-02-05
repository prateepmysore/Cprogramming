#include <stdio.h>

void swapNumbers(int*, int*); //Function Prototype

int main() //Calling Function
{
    int var1 = 10;
    int var2 = 20; //var1 & var2 are called "Actual Arguments"

    printf("Before Swapping\n var1: %d and var2: %d\n", var1, var2);
    //Function Invoking statement
    swapNumbers(&var1, &var2);
    printf("After Swapping\n var1: %d and var2: %d\n", var1, var2);
}

//Function Defination
void swapNumbers(int* pVar1, int* pVar2) //Called Function
{
    int temp = 0;
    temp = *pVar1;
    *pVar1 = *pVar2; //pVar1 & pVar2 are called "Formal Arguments"
    *pVar2 = temp;
}
