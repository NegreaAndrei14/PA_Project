///\file write.c
///\brief C library implementation for writing in a file.
///
/// Created by Negrea Andrei Adelin on 01/06/18.
#include<stdio.h>

void write( int a, int b )
{
    FILE *f;
    f =  fopen("output_method2.txt", "a");///the file output_method2 is used to store the solution for the 2nd implementation.
    fprintf(f, "Disk %d move to %d \n", a, b);
    printf("Disk %d move to %d \n", a, b);
    fclose(f);
}
