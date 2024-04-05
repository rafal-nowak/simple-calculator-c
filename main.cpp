#include <iostream>

int main(int argc, char* argv[]) {

    printf("Podano %d argumentow:\n", argc);
    for(int i = 0; i < argc; i++) {
        printf("Argument #%d\t-\t%s\n", i, argv[i]);
    }

    return 0;
}
