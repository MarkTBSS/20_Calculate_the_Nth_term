#include <stdio.h>

int recursive(int n, int a, int b, int c) {
    if (n == 1) {
        return a;
    }
    if (n == 2) {
        return b;
    }
    if (n == 3) {
        return c;
    }
    int inScopeRecursiveResult;
    if (n >= 4) {
        // n = 6
        inScopeRecursiveResult = recursive(n-1, a, b, c) + // 11
                                 recursive(n-2, a, b, c) + // 6
                                 recursive(n-3, a, b, c);  // 3
    }
    return inScopeRecursiveResult; // 20
}

int main() {
    int n, a, b, c;
    n = 6;
    a = 1;
    b = 2;
    c = 3;
    int result = recursive(n, a, b, c);
    printf("%d", result); 
    return 0;
}