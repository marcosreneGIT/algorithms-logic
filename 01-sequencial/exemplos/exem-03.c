// Área

#include <stdio.h>

int main(void)
{

    float b, B, h, area; // A linguagem C aceita b e B.

    b = 6.0;
    B = 8.0;
    h = 5.0;

    area = (b + B) / 2.0 * h;

    printf("%.2f", area);

    return 0;
}