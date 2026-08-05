#include <stdio.h>
// WAP to convert celsius to farenheit
// f= (c * 9/5)+ 32
float conv(float c);
int main()
{
    float c;
    scanf("%f", &c);
    float f = conv(c);
    printf("the temp in farenheit is :%.2f", f);
    return 0;
}
float conv(float c)
{
    float f = (c * 9.0 / 5.0) + 32;
    return f;
}