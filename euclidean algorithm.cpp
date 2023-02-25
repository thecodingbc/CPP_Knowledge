
/*

gcd(a,b) = a = gcd(b,a%b)
for(;b>0;){
  int c=a%b;
  a=b;
  b=c;
 }
 cout<<a<<endl;

*/
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    // base case
    if (b == 0) {
        return a;
    }

    // recursive case
    return gcd(b, a % b);
}

int main() {
    int num1, num2;

    cout << "Enter two positive integers: ";
    cin >> num1 >> num2;

    // call gcd function and print result
    cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd(num1, num2) << endl;

    return 0;
}
