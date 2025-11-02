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
std::string gjdc(std::string s1, std::string s2) {
	std::string s3 = "";
	for (int i = 1; i <= (s1.size() + s2.size()); i++) {
		s3 += "0";
	}
	int c;
	reverse(s1.begin(), s1.end());
	reverse(s2.begin(), s2.end());
	for (int i = 0; i < s1.size(); i++) {
		int j;
		c = 0;
		for (j = 0; j < s2.size(); j++) {
			int sum = (s1[i] - '0') * (s2[j] - '0') + c + s3[i + j] - '0';
			s3[i + j] = char(sum % 10 + '0');
			c = sum / 10;
		}
		if (c != 0) s3[i + j] = char(c + '0');
	}

	while (1) {
		if (s3[s3.size() - 1] == '0') {
			s3.erase(s3.size() - 1, 1);
		}
		else {
			break;
		}
	}
	reverse(s3.begin(), s3.end());
	if (s3 == "") return "0";
	else return s3;
}
std::string gjdj(std::string s1, std::string s2) {
	std::string s3 = "";
	int c = 0;
	if (s1.size() < s2.size()) swap(s1, s2);
	reverse(s1.begin(), s1.end());
	reverse(s2.begin(), s2.end());
	for (int i = 0; i < s1.size(); i++) {
		int sum = s1[i] + (i < s2.size() ? s2[i] : '0') - 96 + c;
		s3.push_back(char(sum % 10 + 48));
		c = sum / 10;
	}
	if (c) s3.push_back(char(c + '0'));
	reverse(s3.begin(), s3.end());
	return s3;
}
std::string gjdjj(std::string s1, std::string s2) {
	if (s1 == s2) {
		return "0";
	}
	bool flag = false;
	if (s1 < s2 && s1.size() <= s2.size()) {
		swap(s1, s2);
		flag = true;
	}
	std::string s3 = "";
	int c = 0;
	reverse(s1.begin(), s1.end());
	reverse(s2.begin(), s2.end());
	for (int i = 0; i < s1.size(); i++) {
		if (s1[i] >= (i < s2.size() ? s2[i] : '0') + c) {
			s3.push_back(char(s1[i] - (i < s2.size() ? s2[i] : '0') - c + '0'));
			c = 0;
		}
		else {
			s3.push_back(char(s1[i] - (i < s2.size() ? s2[i] : '0') + 10 - c + '0'));
			c = 1;
		}
	}
	while (1) {
		if (s3[s3.size() - 1] == '0') {
			s3.erase(s3.size() - 1, 1);
		}
		else {
			break;
		}
	}
	if (flag) s3.push_back('-');
	reverse(s3.begin(), s3.end());
	return s3;
}
int jz_to(int k,string a){
	reverse(a.begin(),a.end());
	int res=0;
	for(int i=0;i<a.size();i++){
		int s;
		if(a[i]>='A'){
			s = a[i]-'A'+10;
		}else{
			s=a[i]-'0';
		}
		int a = pow(k,i)*s;
		res+=a;
	}
	return res;
}	
