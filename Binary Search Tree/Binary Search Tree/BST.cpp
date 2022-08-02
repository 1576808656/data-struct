#include<iostream>

int main()
{
	using namespace std;
	int* p = new int[5];
	cout << "print the address: " << p << endl;
	delete[] p;
	p = new int[5];
	cout << "print the address again: " << p << endl;
	delete[] p;
	system("pause");
}