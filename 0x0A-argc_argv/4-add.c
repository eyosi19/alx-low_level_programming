#include <stdio.h>
#include "main.h"




int _atoi(char *s) {
    int result = 0;
    int sign = 1;

    while (*s == ' ' || *s == '\t' || *s == '\n')
        s++;

    if (*s == '-' || *s == '+') {
        sign = (*s++ == '-') ? -1 : 1;
    }

    while (*s >= '0' && *s <= '9') {
        result = result * 10 + (*s - '0');
        s++;
    }

    return sign * result;
}



int main(int argc, char *arg[])
{

