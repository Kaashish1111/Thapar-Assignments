#include <stdio.h>

typedef struct {
    int x;
    char y[12];
} Point;

void swapPoints(Point *p1, Point *p2) {
    Point temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    Point p1 = {1, "kashish"};
    Point p2 = {3, "sunita"};

    printf("Before swap: p1 = (%d, %s), p2 = (%d, %s)\n", p1.x, p1.y, p2.x, p2.y);

    swapPoints(&p1, &p2);

    printf("After swap: p1 = (%d, %s), p2 = (%d, %s)\n", p1.x, p1.y, p2.x, p2.y);

    return 0;
}