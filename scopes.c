#include<stdio.h>
#include<stdlib.h>

//The parameter 'str' in the function prototype has 'function prototype scope'.
int printMessage(char *str);

//This variable has 'file scope'
int globalValue = 5;

int main(void) {
    //i, j and str have block scope.
    int i = 1;
    int *j = &i;
    char *str = "Hello, World!";

    if (printf("Sum = %d\n", (i + *j)) < 0) {
        return EXIT_FAILURE;
    }

    {
        /*
        This is another block. Values of variables from the…
        outer block are hidden. So their values cannot be accessed.
        */
        int i = 2;
        int *j = &i;
        if (printf("Sum = %d\n", (i + *j))) {
            return EXIT_FAILURE;
        }
    }
    int retValue = printMessage(str);

    if (retValue == EXIT_SUCCESS) {
        return EXIT_SUCCESS;
    }
    
    return EXIT_FAILURE;
}

//'str' has block scope.
int printMessage(char *str) {
    //Statements within the function have function scope.
    if (puts(str) == EOF) {
        return -1;
    }
    return 0;
}