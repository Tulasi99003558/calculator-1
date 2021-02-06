#include <multiplication.h>

int multiplication()
{
    double j, k, mult;
    print("Two numbers:");
    scanf("%lf %lf" , &j, &k);
    mult = j * k ;
    printf("mult = %.21f",mult);

    return 0;
}
