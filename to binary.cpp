#include "pch.h"
#include <iostream>
#include <math.h>
#include <iostream>
using namespace std;
int main()
{

	int nom;
	int res;

	cin >> nom;

	while (nom != 0)
	{
		res = nom % 2;
		nom /= 2;
		cout << res;
		
		
	}
	system("pause");
}