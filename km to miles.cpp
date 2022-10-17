#include <iostream>
using namespace std;
int main()
{
	double km, miles;
	cout << "Input Distance in km: ";
	cin >> km;
	miles = km/1.609;
	cout << "\nMiles : " << miles;
	
	return 0;
}