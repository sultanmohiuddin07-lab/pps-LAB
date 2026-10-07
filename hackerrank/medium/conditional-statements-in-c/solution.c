#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    char *words[] = {
        "", "one", "two", "three", "four", 
        "five", "six", "seven", "eight", "nine"
    };

    if (n >= 1 && n <= 9) {
        printf("%s\n", words[n]);
    } else {
        printf("Greater than 9\n");
    }

    return 0;
}
