#include <stdio.h>
#include <math.h>

#define size 11

int is_prime(int n) {
    if (n < 2) return 0;
    
for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return 0;
    return 1;
}
int main() {
    char grid[size][size] = {0};
    int x = size / 2, y = size / 2;
    int dx = 1, dy = 0, step = 1, val = 1;

    for (int s = 0; s < size * size; ) {
        for (int i = 0; i < step; i++, s++) {
            if (x >= 0 && x < size && y >= 0 && y < size)
                grid[y][x] = is_prime(val++) ? '*' : '.';
            x += dx; y += dy;

	     }
        int temp = dx; dx = -dy; dy = temp;
        if (dy == 0) step++;
    }


