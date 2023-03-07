#include <iostream>

using namespace std;

int main() {

    float var1;
    float var2;
    float sum;
    float diff;
    float prod;


    sum = var1 + var2;
    diff = var1 - var2;
    prod = var1 * var2;


    cout << " Please enter first number: ";
    cin >> var1;

    cout << " Please enter second number:  ";
    cin >> var2;


    cout << "First number: " << var1 << endl;
    cout << "Second number:  = " << var2 << endl;
    cout << "SUMMATION: " << sum << endl;
    cout << "DIFFERENCE: " << diff << endl;
    cout << "PRODUCTION:  " << prod << endl;

    return 0;
}


