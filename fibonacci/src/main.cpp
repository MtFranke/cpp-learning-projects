#include <iostream>


int fibonacciLoop(int n) {
    if (n == 0 || n == 1) {
        return n;
    }

    int previous = 0, current = 1;
    for (int i = 2; i <= n; ++i) {
        int next = previous + current;
        previous = current;
        current = next;
    }
    return current;

}


int fibonacciRec(int n) {
    if (n <= 1)
        return n;

    int prev = fibonacciRec(n - 1);
    int prev1 = fibonacciRec(n - 2);
    return prev + prev1;
}


int main() {

    std::cout << "Fibonacci time, set number to which number will be generated: \n";
    std::string input;
    std::cin >> input;
    int n = std::stoi(input);
    for (int i = 0; i <= n; i++) {
        std::cout << fibonacciRec(i) << std::endl;
    }

}

