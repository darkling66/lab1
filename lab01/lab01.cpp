// lab01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#define E 2.7182

using namespace std;

float f1(float a, float b, float x) {
	return pow(E, (a * abs(1 - 2 * cos(b * x))));
}

float f2(float a, float b, float x) {
	return ((x*cos(a - x)) / (b*x + 1));
}

float f3(float a, float b, float x) {
	return x * tan(4 * atan(b / (1 - x)));
}

int main() {

	float a = 1.04f, b =-7.12f, x = 3.15f;
	cout << "Ira" << endl;
	cout << "Result: " << f1(a, b, x) << endl;
	cin >> a; cin >> b; cin >> x;
	cout << "Result: " << f1(a, b, x) << endl << endl;
	a = 22.05, b = 4.18, x = 6.24;
	cout << "Kostya" << endl;
	cout << "Result: " << f2(a, b, x) << endl;
	cin >> a; cin >> b; cin >> x;
	cout << "Result: " << f2(a, b, x) << endl << endl;
	float i = 7.28f, q = 1.89f, u = 2.87f;
	cout << "Artem" << endl;
	cout << "Result: " << f3(i, q, u) << endl;
	cin >> i; cin >> q; cin >> u;
	cout << "Result: " << f3(i, q, u) << endl << endl;
	system("pause");
    return 0;
}