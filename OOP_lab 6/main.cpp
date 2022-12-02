#include <iostream>
#include <string>
#include <math.h>
#include "ÑonsistentSearch.h"

using namespace std;

template<typename T>
T getModule(T number) {
	return fabs(number);
}

int main()
{
	long number1 = -1;
	double number2 = -2;
	int number3 = -3;
	cout << "Task 1" << endl;
	cout << getModule(number1) << endl;
	cout << getModule(number2) << endl;
	cout << getModule(number3) << endl;
	cout << "Task 2" << endl;
	vector<pair<int, string>> data;

	data.push_back(pair<int, string>(1, "first value"));
	data.push_back(pair<int, string>(3, "third value"));
	data.push_back(pair<int, string>(4, "fourth value"));

	ConsistentSearch<int, string> storage(data);

	for (int i = 1; i <= 4; i++) {
		try {
			cout << storage.search(i) << endl;
		}
		catch (string s) {
			cout << s << endl;
		}
	}

}
