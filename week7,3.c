#include <stdio.h>

int main() {
    char str[100];
    char *i, *j, t;

    printf("Enter a string: ");
    scanf("%s", str);

    i = str;
    j = str;

    while (*j != '\0') {
        j++;
    }
    j--; 
    while (i < j) {
        t = *i;
        *i = *j;
        *j = t;

        i++;
        j--;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}


