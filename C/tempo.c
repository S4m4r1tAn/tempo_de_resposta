#include <stdio.h>
#include <time.h>

int main() {
    int sum = 0;
    clock_t start, end;
    double cpu_time_used;
    start = clock();
    for (int i = 1; i <= 100000000; i++) {
        sum += i;
    }
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Sum = %d\n", sum);
    printf("Time taken: %f seconds\n", cpu_time_used);
    return 0;
}