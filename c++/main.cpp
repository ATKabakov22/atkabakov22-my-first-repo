#include"Header.h"

int main()
{
	char arr[100], pr;
	int br;

	cin.getline(arr, 100);
	cin >> pr;

	br = strlen(arr);

	for (int i = 0; i < br; i++)
	{

		if (arr[i]==pr)
		{	
		}
		else
		{
			cout << arr[i];
		}
	}
}