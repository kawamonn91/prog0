#include <stdio.h>

int main() {

    int i = 0;


    i++;
    printf("%d\n", i);
    ++i;
    printf("%d\n", i);
    printf("-------------\n");

    printf("%d\n", ++i);
    printf("%d\n", i++);
    printf("%d\n", --i);
    printf("%d\n", i--);

    return 0;
}
