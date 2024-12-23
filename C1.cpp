#include <iostream>
using namespace std;
int fibonacci(int n) {
    if (n <= 1) {
        return n; 
    }
    return fibonacci(n - 1) + fibonacci(n - 2); 
}
int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Fibonacci number F(" << n << ") = " << fibonacci(n) << endl;
    return 0;
}
