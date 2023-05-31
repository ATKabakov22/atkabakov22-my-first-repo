#include"Header.h"

int main()
{
	int arr[100], br, ch;
	bool bol = 1;

	cin >> br >> ch;

	for (int i = 0; i < br; i++)
	{
		cin >> arr[i];

		if (arr[i] == ch)
		{
			bol = 0;
		}
	}

	if (bol==1)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
}