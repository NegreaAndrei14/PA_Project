///\file adds.c
///\brief C library implementation for  solving a library the hanoi towers problem.
///
/// Created by Negrea Andrei Adelin on 01/06/18.
///
/// If n = 1 we will do the mve a->b . If n = 2 we will do the move a->c,c->b.If n>2 we will do the basic ivide Ed Impera algorithm
#include<stdio.h>

int hanoi(int n, int a, int b, int  c)
{
    if(n)
        {
            hanoi(n-1,a,c,b); ///n-1 move from rod A to rod C, using rod B
            write( a, b);     ///write the output in the file output_method2.txt
            hanoi(n-1,c,b,a); /// n-1 move from rod C to rod B, using rod A
        }
}
