#include <stdio.h>
#define IN 1
#define OUT 0
#include <limits.h>
main()
{
     /*Program to calculate ranges of char, short, int and long
      signed and unsigned*/
      /*signed types*/
      printf("Signed char min = %d\n",SCHAR_MIN);
      printf(" Signed char max = %d\n",SCHAR_MAX);
      printf("signed short min = %d\n",SHRT_MIN);
      printf("|| max = %d\n", SHRT_MAX);
      printf("signed int min = %d\n",INT_MIN);
      printf("signed int max = %d\n", INT_MAX);
      printf("signed long min = %d\n", LONG_MIN);
      printf("signed long max = %d\n", LONG_MAX);
      /*unsigned types*/
      printf("Unsigned char max = %u\n", UCHAR_MAX);
      printf("Unsigned short max = %u\n", USHRT_MAX);
      printf("Unsigned int max = %u\n", UINT_MAX);
      printf("unsigned long max = %u\n", ULONG_MAX);


}
