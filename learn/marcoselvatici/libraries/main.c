#include <stdio.h>
#include "tinyexpr.h"

int main() {
    printf("The result of (2+23)/5-1 is: %f\n", te_interp("(2+23)/5-1", 0));
    return 0;
}