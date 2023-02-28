#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char **argv)
{

    int i, num = 3;
    double *dat;
    double sum = 0.0;
    double sqrt_sum = 0.0;

    //Allocating the array space
    dat = (double *) malloc(num * sizeof(double));

    //Initializing the array
    for (i = 0; i < num; i++)
    {
        dat[i] = (double) i;
    }


    //Array reduction
    for (i = 0; i < num; i++)
    {
	    sum += dat[i];
    }

    //Array reduction
    for (i = 0; i < num; i++)
    {
	    sqrt_sum += sqrt(dat[i]);
    }

    //Printing array
    for (i = 0; i < num; i++)
    {
        printf("dat[%d] = %f\n", i, dat[i]);
    }

    printf("\nsum = %f\n\n",sum);

    printf("\nsqrt_sum = %f\n\n",sqrt_sum);

    return 0;

}
