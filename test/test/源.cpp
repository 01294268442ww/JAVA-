#include<iostream>
#include <fstream>
using namespace std;
int main()
{
	int a[10];
	ifstream infile("f1.dat"); //
	if (!infile) //
	{
		cerr << "open error!" << endl;
		exit(1);
	}
	cout << "10 integer numbers are:" << endl;
	for (int i = 0; i < 10; i++)
	{
		infile >> a[i]; //
		cout << a[i] << " ";
	}
	infile.close(); //
	return 0;
}