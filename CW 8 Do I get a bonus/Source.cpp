#include<iostream>
#include<string>
using namespace std;

string bonus_time(const int& salary,const bool bonus){
	return (bonus) ? "$" + to_string(salary * 10) : "$" + to_string(salary);
}

int main() {
	int sal = 10000;
	bool bon = true;
	cout << bonus_time(sal, bon) << endl;
	return 0;
}