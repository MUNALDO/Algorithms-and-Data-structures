#include <iostream>
using namespace std;
int main(){
	int digit, sum = 0;
	int n;
	cout << "Enter the number of digits:";
	cin >> digit;
	cout<< "Enter your number:";
	cin >> n;
	for (int i = 0; i <= digit; i++){
		int s = n%10;
		n /=10;
		sum += s;
	}
	cout << "digit sum is:" << sum;
	return 0;
}