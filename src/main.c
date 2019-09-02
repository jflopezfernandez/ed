
#include "ed.h"

int main(int __attribute__((unused)) argc, const char __attribute__((unused)) *argv[])
{
    static const char* prompt = " > ";

    char* input_buffer = NULL;

    while ((input_buffer = readline(prompt))) {
        if (strcmp(input_buffer, "quit") == 0) {
            break;
        }

        printf("%s\n", input_buffer);

        free(input_buffer);
    }

    return EXIT_SUCCESS;
}
