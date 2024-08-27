#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Please provide at least one number as a command line argument.\n");
        return 1;
    }

    double max = atof(argv[1]);
    for (int i = 2; i < argc; i++) {
        double num = atof(argv[i]);
        if (num > max) {
            max = num;
        }
    }

    printf("The maximum number is: %f\n", max);

    return 0;
}
