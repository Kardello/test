#include <stdio.h>
#include <string.h>

void process_input(const char *input) {
    if (strcmp(input, "fuzz") == 0) {
        printf("Fuzzing detected!\n");
    } else {
        printf("Input: %s\n", input);
    }
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <input>\n", argv[0]);
        return 1;
    }
    process_input(argv[1]);
    return 0;
}