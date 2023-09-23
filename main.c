#include <stdio.h>

int main() {
    int num1;
    FILE *p_file = fopen("C:\\Users\\rheng\\CLionProjects\\tipsoft.txt", "rt");
    if (NULL != p_file) {
        fscanf(p_file, "%d", &num1);
        printf( "%d\n", num1);

        fclose(p_file);
    }
    return 0;
}

