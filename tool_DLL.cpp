#include "tool_DLL.h"

using namespace std;

int add(int x, int y) {
	return x + y;
}
int reauce(int x, int y) {
	return x - y;
}
double add(double x, double y) {
	return x + y;
}
std::string add(std::string x, std::string y) {
	return x + y;
}
double reauce(double x, double y) {
	return x - y;
}
void print(int x) {
	std::cout << x << endl;
}
void print(float x) {
	std::cout << x << endl;
}
void print(double x) {
	std::cout << x << endl;
}
void print(short x) {
	std::cout << x << endl;
}
void print(long long x) {
	std::cout << x << endl;
}
void print(char x) {
	std::cout << x << endl;
}
void print(std::string x) {
	std::cout << x << endl;
}
int len(std::string x) {
	return x.size();
}
int len(int arr[]) {
	return sizeof(arr) / sizeof(int);
}
void sc(int n, int a[]) {
	std::cout << a[1];
	for (int i = 2; i <= n; i++) {
		std::cout << '\n' << a[i];
	}
}
int cwfgg(int a) {
	int flag = 0;
	int b = a;
	for (; a;) {
		if (a % 10 == 7) {
			flag = 1;
			break;
		}
	}
	if (flag || b % 7 == 0) {
		return flag;
	}
	else {
		return flag;
	}
}
int pdss(int s) {
	for (int e = 2; e <= s - 1; e++) {
		if (s % e == 0) {
			return 0;
		}
	}
	return 1;
}
int hw(int a) {
	int a1 = a;
	int b = 0;
	while (a) {
		b = b * 10 + a % 10;
		a /= 10;
	}
	if (a1 == b) {
		return 1;
	}
	else {
		return 0;
	}
}
