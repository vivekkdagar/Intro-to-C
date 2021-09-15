/*Program 4: Copy input to output V1*/
#include <stdio.h>
main()
{
    int c;
    c = getchar();
    while (c != EOF){
        putchar(c);
        c= getchar();
    }
}