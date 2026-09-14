#include <calc.h>

int add(int a, int b) {
    return a + b;
}

int minus(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (a != 0 && b != 0) {
        return a / b;
    } else {
        return;
    }
}
