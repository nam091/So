#include <stdio.h>
#include <math.h>

// La Phuong Nam - AT190536

int is_prime(int n) {
    if (n < 2) {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int count_primes(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (is_prime(arr[i])) {
            count++;
        }
    }
    return count;
}

void print_primes(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (is_prime(arr[i])) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int n;
    printf("Nhap so phan tu trong mang: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    int num_primes = count_primes(arr, n);
    printf("Co %d  nguyen to trong mang: ", num_primes);
    print_primes(arr, n);
    return 0;
}