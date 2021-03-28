#include <iostream>
#include <cmath>
#define N 3
using namespace std;

int main() {
	double x, sum = 1, elem = 1;
	do {

		cout << "Input x : " << endl;
		cin >> x;
		cin.clear();
	} while (cin.get() != '\n');
	
	for (int i = 1; i < N+1; i++)
	{
		elem *= -x * x / (2 * i * (2 * i - 1)); 
		sum += elem;	
	}
	cout <<  sum ; 

}