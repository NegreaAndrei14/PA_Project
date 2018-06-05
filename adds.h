///\file adds.h
///\brief C library implementation for  solving the hanoi towers problem.
///
/// Created by Negrea Andrei Adelin on 01/06/18.
///
/// If n = 1 we will do the mve a->b . If n = 2 we will do the move a->c,c->b.If n>2 we will do the basic ivide Ed Impera algorithm
#include<stdio.h>


void write( int a, int b );
int hanoi(int n, int a, int b, int  c);
