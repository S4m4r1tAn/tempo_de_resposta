#include <stdio.h>

int main() {
    int sum = 0;
    for (int i = 1; i <= 100000000; i++) {
        sum += i;
    }
    printf("Sum = %d\n", sum);
    return 0;
}