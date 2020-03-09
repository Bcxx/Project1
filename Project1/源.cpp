#include<iostream>
using namespace std;


void f(int,int &i) {
	i = 9;
	return;
}
float didi(int a)throw{

	return 0;
}
int main() {
	int a = 2;
	double s = 2;
	int i = 0;
	if (i == 0) {
		int i = 3;
	}
	f(s, i);
	cout << i;
	return 0;
}
