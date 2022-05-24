#include<iostream>
#include <fstream>
#include<cstring>
#include<cstdlib>
using namespace std;

void Print(int*a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

int cmp(const void* e1,const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

int main()
{
	int a[10] = { 0 };
	fstream myOutfile1("first.dat");
	fstream myOutfile2("second.dat");
	if (!myOutfile1) 
	{
		cerr << "open first.adt error" << endl;
		exit(-1);
	}

	if (!myOutfile2)
	{
		cerr << "open second.dat error" << endl;
		exit(-1);
	}

	cout << "enter 10 integer numbers:" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
		if (i < 5)
		{
			myOutfile1 << a[i] << " ";
		}
		else
		{
			myOutfile2 << a[i] << " ";
		}
	}
	myOutfile1.close();
	myOutfile2.close();


	ifstream myinfile1("first.dat",);
	ifstream myinfile2("second.dat");

	if (!myinfile1)
	{
		cerr << "open first.dat error!" << endl;
		exit(-1);
	}
	if (!myinfile2)
	{
		cerr << "open second.dat error!" << endl;
		exit(-1);
	}

	memset(a, 0, sizeof(int) * 10);
	
	for (int i = 0; i < 5; i++)
	{
		myinfile2 >> a[i];

		myOutfile1 << a[i];
	}

	myinfile1.close();
	myinfile2.close();

	for (int i = 0; i < 10; i++)
	{
		
	}

	

	Print(a, 10);

	qsort(a, 10, sizeof(int), cmp);

	Print(a, 10);


	

	return 0;
}