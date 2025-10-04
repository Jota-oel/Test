#include "lib.h"

int main() {
    trip trips[] = {
        { 1, 2, 10, -1 },
        { 2, 3, 11, 5 },
        { 3, 4, 7, -1 },
        { 4, 2, 1, -1 },
        { 2, 4, 8, -1 }
    };
    int n = 5;
    int m = sizeof(trips)/sizeof(trips[0]);

    get_paths(n, trips, m);
}

