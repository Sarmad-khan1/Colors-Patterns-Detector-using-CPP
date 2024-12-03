#include <iostream>
using namespace std;
int main()
{
	int size;
	cout << "Number of colors in the pattern: ";
	cin >> size;
	string colors[size];
	for (int i = 0; i < size; i++)
	{
		cout << "Enter the colors: ";
		cin >> colors[i];
	}
	int strips = 0;
	int totalPatterns = 0;
	int shifts = 0;
	int time = 2;

	shifts = time * size;
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if(colors[i] != colors[j])
			{
				strips = strips + 1;
				colors[j] = ' ';
				break;
			}
		}
	}
	totalPatterns = strips + shifts;
	cout<<"Output: "<<totalPatterns;
}