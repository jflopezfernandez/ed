
#include "ed.h"

int main(int __attribute__((unused)) argc, const char __attribute__((unused)) *argv[])
{
    if (argc == 1) {
        fprintf(stderr, "No input(s).\n");
        exit(EXIT_FAILURE);
    }

    while (*++argv) {
        printf("%s\n", *argv);
    }

    return EXIT_SUCCESS;
}
