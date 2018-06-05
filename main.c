///\file main.c
///\brief C library implementation for  solving a library the hanoi towers problem.
///
/// Created by Negrea Andrei Adelin on 01/06/18.

#include <stdio.h>
#include "adds.h"
#include "write.h"
#define M 25  ///M value is 25 to ease the execution time.

int t, s1=0, s2=0,r1=0, r2=0;
int stack[M];

void stack_implementation(int n, int x, int y)
{
    int i;
    FILE *out;
    out = fopen("output_method1.txt","a");///the file output_method1 is used to store the solution for the 1nd implementation.
    for (i=1; i<=n; i++)
    {
        if(i>0)
        {
            if (i%2)
            {
                if (t%2)
                {
                    s2=y;
                    if (stack[i]!=0)
                        r2=stack[i]-1;
                    else
                        r2=s2;
                    if (r2<1)
                        r2=3;
                }
                else
                {
                    s2=y-1;
                    if (stack[i]!=0)
                        r2=stack[i]+1;
                    else
                        r2=s2;
                    if (r2>3)
                        r2=1;
                }
                stack[i]=r2;
                printf("Disk %d move from %d to %d\n",i,x,r2);
                fprintf(out,"Disk %d move from %d to %d\n",i,x,r2);
                stack_implementation(i-1, r1, r2);
            }
            else
            {
                if (t%2)
                {
                    s1=y-1;
                    if (stack[i]!=0)
                        r1=stack[i]+1;
                    else
                        r1=s1;
                    if (r1>3)
                        r1=1;
                }
                else
                {
                    s1=y;
                    if (stack[i]!=0)
                        r1=stack[i]-1;
                    else
                        r1=s1;
                    if (r1<1)
                        r1=3;
                }
                stack[i]=r1;
                printf("Disk %d move from %d to %d\n",i,x,r1);
                fprintf(out ,"Disk %d move from %d to %d\n",i,x,r1 );
                stack_implementation(i-1, r2, r1);
            }
        }
    }
    return;
}

int main(char *args[], int argn)
{

    int j,pick,n; ///j is a variabe used to initialize the stack , pick is a variable used to chose the method used n the GUI and n represents the number if towers in the 2nd algorithm.
    start:///start is a tag used to reset the problem in case a bad imput is introduced in the GUI
    printf("Pick method 1 or 2: ");
    scanf("%d", &pick);
    if(pick != 1 && pick != 2)
    {
    	printf("\nALEGERE INVALIDA !\n");
    	goto start;
    }
    if (pick == 1)
    {
    for (j=0; j<M; j++) stack[j]=0;
    printf("Introduceti numarul de dicuri: ");
    scanf("%d", &t);
    stack_implementation(t,1,3);
    }
    if(pick == 2)
    {
        printf("Introduceti numarul de piese ");
         scanf("%d", &n);
         hanoi(n, 1, 2, 3);
    }



    return 0;
}
