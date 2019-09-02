
#include "ed.h"

static const char* prompt = "";

static char* input_buffer = NULL;

int main(int argc, char **argv)
{
    if (argc == 1) {
        fprintf(stderr, "%s\n", "No filename given");
        exit(EXIT_FAILURE);
    }

    FILE* file = fopen(argv[1], "r+");

    if (file == NULL) {
        fprintf(stderr, "[Error] %s\n", "Failed to open file");
        exit(EXIT_FAILURE);
    }

    size_t characters = 0;

    int current_character = 0;

    while ((current_character = fgetc(file)) != EOF) {
        ++characters;
    }

    printf("%lu\n", characters);

    while ((input_buffer = readline(prompt))) {
        if (strcmp(input_buffer, "q") == 0) {
            break;
        }

        printf("%s\n", input_buffer);

        free(input_buffer);
    }

    fclose(file);

    return EXIT_SUCCESS;
}
