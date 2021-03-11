#include<stdlib.h>
#include<stdio.h>

int* makeArray(void);

int main(void) {
    int *arry = makeArray();
    for(int i = 0; i < 5; i++) {
        printf("%d ", arry[i]);
    }
    printf("\n");
}

int* makeArray(void) {
    static int i[] = {1, 2, 3, 4, 5};
    return i;
}