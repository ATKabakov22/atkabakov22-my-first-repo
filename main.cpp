#include"Header.h"	


int main()
{
  float arr[30], x;
	int b, xb = 0;
	
	cin >> b >> x;

	for ( int i = 0; i < b; i++)
	{
		cin >> arr[i];

		if (arr[i]==x)
		{
			xb++;
		}
	}

	if (b>30||b<0|| x>200 || x < 0 )
	{
		cout << "Incorrect input";
	}
	else
	{
		cout << xb;
	}
}