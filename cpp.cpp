#include <iostream>

using namespace std;


int main()
{
	float arr[29], aarr = 0, var = 0;

	for (int i = 0; i < 30; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < 30; i++)
	{
		aarr = aarr + arr[i];
	}

	cout << "Average = " << aarr / 30 << "\n";

	for (int i = 10; i < 20; i++)
	{
		var = var + arr[i];

	}

	cout << "Average 11-20 = " << var/10 << "\n";

	for (int i = 0; i < 30; i++)
	{
		if (arr[i]<aarr/30)
		{
			cout << i + 1 << " ";
		}
	}
}