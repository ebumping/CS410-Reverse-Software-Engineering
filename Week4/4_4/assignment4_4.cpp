#include <iostream>
using namespace std;

int main() {
	int binNum;
	int decValue = 0;
	//This will handle base value, like 2^0
	int base = 1;
	cout << "Enter the binary number: " << endl;
	cin >> binNum;
	while (binNum) {
		int lastDigit = binNum % 10;
		binNum = binNum / 10;
		decValue += lastDigit * base;
		base = base * 2;
	}
	cout << "Equivalent decimal value: " << decValue;

}