
#ifndef PROJECT_INCLUDES_ed_H_
#define PROJECT_INCLUDES_ed_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>
#include <string.h>
#include <setjmp.h>
#include <ctype.h>
#include <errno.h>
#include <math.h>
#include <signal.h>
#include <time.h>
#include <locale.h>
#include <limits.h>
#include <inttypes.h>

#include <readline/readline.h>
#include <readline/history.h>

#if !defined(FALSE) || !defined(TRUE)
enum { FALSE = 0, TRUE = !FALSE };
#endif // FALSE || TRUE

#endif // PROJECT_INCLUDES_ed_H_
