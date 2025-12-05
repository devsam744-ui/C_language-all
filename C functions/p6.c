#include <stdio.h>
void main_16() {
char fruits[3][10] = {
 "Apple",
 "Banana",
 "Cherry"
 };
 int num_strings = 3;
 printf("The stored strings are:\n");
 for (int i = 0; i < num_strings; i++) {
 printf("String %d: %s\n", i + 1, fruits[i]); }
}
