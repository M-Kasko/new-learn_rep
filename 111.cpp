// 111.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <math.h>
#include <iostream>
using namespace std;
int main()
{
	
	char binStr[255];
	int res = 0, i, n, simv;
	float x = 0;
	cout <<"enter mass using (1,0) "<<endl;
	cin.getline(binStr, 255);
	n = strlen(binStr);
	for (i =n-1; i >= 0; i--)
	{
		simv = binStr[i];
		if (simv == 48) res += 0;
		else if (simv == 49) res += (1 * (pow(2, x)));
		else goto exit; 
		x++;
	}
	cout << endl << binStr << "in 10-s form" <<"="<< res << endl;
exit: cout << "no answer"<<endl;
	system("pause");
	return 0;
}