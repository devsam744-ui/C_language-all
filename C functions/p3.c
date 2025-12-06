// print hello with name function in loop
#include <stdio.h>

void ph(void);

int main(void) {
    for (int count = 1; count <= 5; ++count) {
        ph();
    }
    return 0;
}

void ph(void) {
    printf("Hello\n");
    printf("My Name is Saumya Kumar\n");
}
