#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int bNum, D = 0, pwr = 0;
    cout << "Hello, This is a simple program to convert Binary numbers into Decimal" << endl;
    cout << "Please Enter the binary number: ";
    cin >> bNum;

    while (bNum > 0) {
        int digit = bNum % 10;
        if (digit != 0 && digit != 1) {
            cout << "Invalid binary number entered!" << endl;
            return 1;
        }
        D += digit * pow(2, pwr);
        bNum /= 10;             
        pwr++;                   
    }

    cout << "The decimal equivalent is: " << D << endl;
    return 0;
}
