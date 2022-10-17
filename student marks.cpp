#include <iostream>
using namespace std;
int main()
{
	string roll_num;
	int sub_1, sub_2, sub_3, sum, avg;
	cout << "Input number of the your subjects: ";
	cin >> sub_1 >> sub_2 >> sub_3;
	sum = sub_1 + sub_2 + sub_3;
	avg = (sum)/3;
	cout << "\nSum of the subject marks is " << sum << " and their average is " << avg;
	return 0;
}