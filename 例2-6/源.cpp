#include<iostream>
using namespace std;
int main()
{
	int n, right_digit;
	cout << "Enter the number";
	cin >> n;
	do {
		right_digit = n % 10;
		cout << right_digit;
		n /= 10;
	} while (n != 0);
	cout << endl;

	return 0;
}