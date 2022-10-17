#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	string str;
	cout << "Input the number: ";
	cin >> str;
	for(int i = str.length(); i>=0; i--)
	{
		cout << str[i];
	}
	return 0;
}