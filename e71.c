#include <stdio.h>

int sum(int a, int b);
int multiply(int a, int b);
float subtract(int a, int b);
float divide(int a, int b);  // Correct function name

int main() 
{
    int result;
    result = sum(10, 20);
    printf("Result is %d\n", result);

    float result1;
    result1 = subtract(30, 2);
    printf("Result1 is %.2f\n", result1);

    int result2;
    result2 = multiply(20, 5);
    printf("Result2 is %d\n", result2);

    float result3;
    result3 = divide(30, 15);  // Correct function call
    printf("Result3 is %.2f\n", result3);  // Correct format specifier
    return 0;
}

int sum(int a, int b) 
{
    int c;
    c = a + b;
    return c;
}

float subtract(int a, int b) 
{
    float c;
    c = (float)a - b;  // Correct floating-point division
    return c;
}

int multiply(int a, int b) 
{
    int c;
    c = a * b;
    return c;
}

float divide(int a, int b) 
{
    float c;
    c = (float)a / b;  // Correct division operation
    return c;
}
