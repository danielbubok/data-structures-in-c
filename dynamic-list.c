#include <stdio.h>
#define MAXSIZE 99

int list[MAXSIZE];

void replaceitem(int index, int value) {
    list[index] = value;
}

void removeitem(int index) {
    list[index] = 0;
}

int readitem(int index) {
    return list[index];
}

int main() {
    // we clear the entire array
    for (int i = 0;i < MAXSIZE;i++) {
        removeitem(i);
    }
    int x = 67;
    replaceitem(0, x);
    printf("%i\n", readitem(0)); // should return 67
    removeitem(0);
    printf("%i\n", readitem(0)); // should return 0
}
