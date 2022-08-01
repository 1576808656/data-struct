#include<iostream>
#include"myArray.h"

using namespace std;


int main()
{
	Array array = Array(5);
	array.add(4);
	array.add(2);
	array.add(1, 0);
	for (int i = 0; i < 5; i++)
		cout << "p[" << i << "] = " << array.get(i) << endl;
	system("pause");
	return 0;
}
