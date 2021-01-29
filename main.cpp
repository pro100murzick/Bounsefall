#include <iostream>

using namespace std;

void print(int a, int n);
void print(float a);
void print(double a);
void print(char c);
void print(bool p);
void print(char* str);

int fact(int n) {
	if (n == 0 || n == 1) {
		return 1;
	}
	return n * fact(n - 1);
}

int fib(int n) {
	if (n <= 1)
		return 0;
	if (n == 2 || n == 3)
		return 1;
	return fib(n - 1) + fib(n - 2);
}

int main() {
	
	for (int i = 1; i <= 20; i++) {
		cout << fib(i) << " ";
	}

	cout << fact(5);

	print(1, 5); // int func
	print(10.0); // double func
	print(20.0f); // float func
	print('A'); // char func
	print(false); // bool func
	char str[] = "It rains today";
	print(str); // str func


	return 0;
}

void print(int a, int n)
{
	for (int i = 0; i < n; i++)
		cout << "This is cout from print(int a) func, a = " << a << endl;
}

void print(float a)
{
	cout << "This is cout from print(float a) func, a = " << a << endl;

}

void print(double a)
{
	cout << "This is cout from print(double a) func, a = " << a << endl;
}

void print(char c)
{
	cout << "This is cout from print(char c) func, c = " << c << endl;
}

void print(bool p)
{
	cout << "This is cout from print(bool p) func, p = " << p << endl;
}

void print(char* str)
{
	cout << "This is cout from print(char *str) func, str = " << str << endl;
}
