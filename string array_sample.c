
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{

    char str[2][10] = {"abc" , "def"};
    //char str[][10] = {"abc" , "def"};

    puts(str[0]);
    puts(str[1]);
}
