#include<stdio.h>
#include"fib.h"

#define LOOP_CNT 10

int
main( )
{
#ifdef _OPENMP
printf( "The number of processors is %d\n", omp_get_num_procs( ) );
#endif
    int i_cnt = 0;
    #ifdef _OPENMP
    #pragma omp parallel for
    #endif
    for ( i_cnt = 0; i_cnt < LOOP_CNT; i_cnt++ )
    {
        printf( "fib:%lu\n", fib( 40 ) );
    }
    return 0;
}
