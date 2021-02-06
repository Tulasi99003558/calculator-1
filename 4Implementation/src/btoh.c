#include <btoh.h>
 
int btoh()
{
    long int binaryval=0, hexadecimalval = 0, i = 1;
 
    printf("Enter the binary number: ");
    scanf("%ld", &binaryval);
    long int remainder;
    while (binaryval != 0)
    {
        remainder = binaryval % 10;
        hexadecimalval = hexadecimalval + remainder * i;
        i = i * 2;
        binaryval = binaryval / 10;
    }
    printf("Equivalent hexadecimal value: %lX", hexadecimalval);
    return 0;
}
