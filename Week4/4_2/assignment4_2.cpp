#include<iostream>
using namespace std;

int main(){
	int number;
	double volume;
	cout << "Enter the Radius: " << endl;
	cin >> number;
	volume = 3.14*number*(number*number);
	cout << "\nThe volume is: " << volume;
	return 1;
}