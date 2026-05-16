#include <stdio.h>
#include <math.h> // Required for pow()

int main() {
    int base = 2;
    int exponent = 3;
    
    // pow returns a double, so we cast it to (int) if needed
    int result = (int)pow(base, exponent);

    printf("%d to the power of %d is %d", base, exponent, result);
    return 0;
}
