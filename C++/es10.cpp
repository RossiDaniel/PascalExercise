#include <stdio.h>
#include <string.h>
#include <iostream>
#include <stdlib.h>

int main ()
{
    char str1[]="Piero e' un mio amico";
    char str2[]="Dario e' un mio amico";

    puts(str1);
    puts(str2);

    puts(strcpy(str1,str2));

    puts(str1);
    puts(str2);

    return 0;
}