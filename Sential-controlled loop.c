#include <stdio.h>

int main() {
    int num;
    printf("Enter numbers (enter -10 to stop): \n");
    while (1) {
        scanf("%d", &num);
        if (num == -10) {
            break;  // Sentinel value to terminate loop
        }
        printf("You entered: %d\n", num);
    }
    return 0;
}
