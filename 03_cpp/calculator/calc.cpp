#include <iostream>
#include <string>
#include <cmath>
using namespace std;
double fo(double a, double b,char operation) {
	switch (operation)
	{
	case '+':
		return a + b;
	case '-':
		return a - b;
	case '*':
		return a * b;
	case '/':
		return a / b;
	case '^':
		return pow(a,b);
	default:
		return -1;
	}


}
int main()
{
	while (true) {
		string a, b;
		char operation;
		cin >> a >> operation >> b;
		cout << fo(stod(a), stod(b), operation)<<"\n";
	}
}