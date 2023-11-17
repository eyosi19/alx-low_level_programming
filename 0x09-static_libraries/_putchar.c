#include <unistd.h>
#include "main.h"

int _putchar(char c)
{
        return write(STDOUT_FILENO, &c, 1);
}

