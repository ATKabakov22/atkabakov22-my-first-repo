#pragma once

#include <iostream>

using namespace std;

int main()
{

	
		int n;
		cin >> n;
		for (int i = 1; i <= n; i++)
		{
			for (int j = i; j <= 2 * i - 1; j++)
			{
				cout << j << " ";
			}
			cout << endl;
		}
	
}