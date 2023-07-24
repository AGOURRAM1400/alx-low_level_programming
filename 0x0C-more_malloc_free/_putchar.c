#include <unistd.h>

/* Custom implementation of putchar */
int _putchar(char c)
{
    return write(1, &c, 1);
}
