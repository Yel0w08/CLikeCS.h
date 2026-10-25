#ifndef CLCS_GENERAL
#define CLCS_GENERAL

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <limits.h>

typedef int64_t     long;


#define ConsoleWrite(...) ((void)printf(__VA_ARGS__))

#define ConsoleWriteLine(...) do { printf(__VA_ARGS__); putchar('\n'); } while (0)

#define ConsoleWriteLine0() do { putchar('\n'); } while (0)



#define Int64  long
#define Double double
#define Boolean bool

#endif
