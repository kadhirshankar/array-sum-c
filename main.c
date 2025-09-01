#include <stdio.h>
#include <stddef.h>
int sum_array(const int *a, size_t n) {
    int s = 0;
    for (size_t i = 0; i < n; ++i) {
        s += a[i];
    }
    return s;
}
int main(void) {
    int arr[] = {1, 2, 3, 4, 5};
    size_t n = sizeof(arr) / sizeof(arr[0]);
    int s = sum_array(arr, n);
    printf("Sum = %d\n", s);
    return 0;
}
