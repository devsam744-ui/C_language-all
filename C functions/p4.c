#include<stdio.h>
int sum(int a, int b) {
    return a + b;
}
int main() {
    int result = sum(3, 4);
    printf("Sum: %d\n", result);
    return 0;
}