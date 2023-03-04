#include <iostream>
using namespace std;
int main() {
    int a = 2;
    bool isPrime = true;
    while (a < 1000) {
        isPrime = true;
        for (int i = 2; i <=a / 2; i++) {
            if (a % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout <<a<< " ";
        }
        a++;
    }
    return 0;
}
