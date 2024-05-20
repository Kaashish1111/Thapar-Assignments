#include <stdio.h>
#include <limits.h>

int main() {
    FILE *file = fopen("marks500.txt", "r");
    if (file == NULL) {
        printf("Error: Unable to open the file.\n");
        return 1;
    }

    int min_mark = INT_MAX, max_mark = INT_MIN;
    float mark;

    while (fscanf(file, "%f", &mark) == 1) {
        if (mark < min_mark) {
            min_mark = mark;
        }
        if (mark > max_mark) {
            max_mark = mark;
        }
    }

    fclose(file);

    printf("Minimum mark: %d\n", min_mark);
    printf("Maximum mark: %d\n", max_mark);

    return 0;
}