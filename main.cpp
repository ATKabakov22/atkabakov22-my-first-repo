#include"Header.h"	

/*int main()
{
	int n, arr[30], Even[30], Odd[30], iEven = 0, iOdd = 0;
	cin >> n;



	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];

		if (arr[i] % 2 == 0)
		{
			Even[iEven] = arr[i];
			iEven++;
		}
		else
		{
			Odd[iOdd] = arr[i];
			iOdd++;
		}
	}
	cout << "Even elements are: ";
	for (int j = 0; j < iEven; j++)
	{
		cout << Even[j] << " ";
	}
	cout << endl;
	cout << "Odd elements are: ";

	for (int j = 0; j < iOdd; j++)
	{
		cout << Odd[j] << " ";
	}
}*/

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