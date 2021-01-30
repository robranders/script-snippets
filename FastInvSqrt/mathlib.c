#include <math.h>
#include <string.h>
#include <stdio.h>

float normal_inv_sqrt( float number )
{
    return 1 / sqrt(number);
}

int main(int argc, char *argv[]) {
	volatile float q = normal_inv_sqrt(100);
	printf("normal_inv_sqrt(100)=%f\n", q);
	return 0;
}