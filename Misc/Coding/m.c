#include <stdio.h>
#include <string.h>

void fun(int x, int y) {
    printf("%d %d", x, y);
}

int main() {
    unsigned int x[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    printf("%u %u %u", x+3, *(x+3), *(x+2)+3);
    return 0;
}