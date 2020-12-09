#ifndef PB_ZEPHYR_H_INCLUDED
#define PB_ZEPHYR_H_INCLUDED

#include <stddef.h>

# if __WORDSIZE == 64
#  define UINT64_C(c)        c ## UL
# else
#  define UINT64_C(c)        c ## ULL
# endif

char * strndup (const char *s, size_t n);
char * strdup (const char *s);

#endif /* PB_ZEPHYR_H_INCLUDED */
