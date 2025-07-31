#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int arr[], int n) {
	int i;
    for ( i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr[] = {1, 2, 3, 2, 1}; 
    int n = sizeof(arr) / sizeof(arr[0]);

    if (isPalindrome(arr, n)) {
        printf(" palindrome.\n");
    } else {
        printf(" NOT a palindrome.\n");
    }

    return 0;
}

