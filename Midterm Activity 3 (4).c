#include <stdio.h>

int main() {
    int i;
    int result = 1;
    
for (i = 0; result <= 512; i++) {
    printf("2^%d = %d\n" , i , result);
    result = result * 2;
    
}
return 0;
}