#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Check(const char *input) {
    if (input[0] == 'F') {
        if (input[1] == 'U') {
            if (input[2] == 'Z') {
                if (input[3] == 'Z') {
                    if (input[4] == 'I') {
                        if (input[5] == 'N') {
                            if (input[6] == 'G') {
                                if (input[7] == 'L') {
                                    if (input[8] == 'A') {
                                        if (input[9] == 'B') {
                                            if (input[10] == 'S') {
                                                printf("FUZZINGLABS detected!\n");
                                                char *ptr = NULL;
                                                *ptr = 0; // Intentional crash
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <input_file>\n", argv[0]);
        return 1;
    }

    FILE *file = fopen(argv[1], "r");
    if (!file) {
        perror("Error opening file");
        return 1;
    }

    fseek(file, 0, SEEK_END);
    long file_size = ftell(file);
    rewind(file);

    char *input = (char *)malloc(file_size + 1);
    if (!input) {
        perror("Memory allocation error");
        fclose(file);
        return 1;
    }

    fread(input, 1, file_size, file);
    input[file_size] = '\0';
    fclose(file);

    Check(input);
    free(input);

    return 0;
}