#include<modulus.h>

float modulus(float num, float num1)
{
    float x1,y1;
    x1 = num;
    y1 = num1;
    float out;
    out = num%num1;
    return out;
}