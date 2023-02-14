#include <stdio.h>
#include <stdlib.h>



int main(int argc, char **argv)
{

    int i, num = 100;
    double *dat;

    //Allocating the array space
    dat = (double *) malloc(num * sizeof(double));

    //Initializing the array
    for (i = 0; i < num; i++)
    {
        dat[i] = (double) i;
    }





    //Printing array
    for (i = 0; i < num; i++)
    {
        printf("dat[%d] = %f\n", i, dat[i]);
    }

    return 0;

}
