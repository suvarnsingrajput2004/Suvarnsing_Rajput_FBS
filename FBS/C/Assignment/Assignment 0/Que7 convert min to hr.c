#include <stdio.h>
int main() {
    int minutes = 135;
    int hours = minutes / 60;
    int rem_minutes = minutes % 60;
    printf("%d minutes = %d hours and %d minutes\n", minutes, hours, rem_minutes);
    return 0;
}

