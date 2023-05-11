#include"Header.h"	


int main()
{
	float arr[10], arr1[10];
	int b, mb = 0;

	cin >> b;

	for (int i = 0; i < b; i++)
	{
		cin >> arr[i] >> arr1[i];
	}

	for (int i = 0; i < b; i++)
	{
		if (arr[i]<arr1[i])
		{
			cout << "Arr3[" << mb << "] = " << arr[i] << "\n";
			mb++;
			cout << "Arr3[" << mb << "] = " << arr1[i] << "\n";
			mb++;
		}
		else
		{
			cout << "Arr3[" << mb << "] = " << arr1[i] << "\n";
			mb++;
			cout << "Arr3[" << mb << "] = " << arr[i] << "\n";
			mb++;
		}
	}
}