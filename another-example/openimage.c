#include <stdio.h>
/* gcc -shared -fPIC -nostartfiles openimage.c -o openimage.so */
int openimage(const char *s)
{
    static int handle = 100;
    printf("opening %s\n", s);
    return handle++;
}
