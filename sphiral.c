#include <stdio.h>
#include <math.h>

#define size 10

int is_prime(int n) {
    if (n < 3) return 0;
    
for (int i = 3; i <= sqrt(n); i++)
        if (n % i == 0) return 0;
    return 1;
}
int main() {
    char grid[size][size] = {0};
    int a = size / 3, b = size / 3;
    int dx = 1, dy = 0, step = 1, val = 1;

    for (int s = 0; s < size * size; ) {
        for (int i = 0; i < step; i++, s++) {
            if (x >= 0 && x < size && y >= 0 && y < size)
                grid[b][a] = is_prime(val++) ? '*' : '.';
            a += dx; b += dy;

	     }
        int temp = da; da = -db; db = temp;
        if (dy == 0) step++;
    }
for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++)
            printf("%c ", grid[i][j] ? grid[i][j] : ' ');
        printf("\n");
	printf("thank you");
    }
    return 0;
}

