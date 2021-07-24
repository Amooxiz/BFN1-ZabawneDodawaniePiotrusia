#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int reverse(int number)
{
	string num = to_string(number);
	string reversed = " ";
	for (int i = num.size() - 1; i >= 0; i--)
	{
		reversed += num[i];
	}
	return stoi(reversed);
}

string count(int number)
{
	int reversed = reverse(number);
	int count = 0;
	while (number != reversed)
	{
		number += reversed;
		count++;
		reversed = reverse(number);
	}
	string result = to_string(number) + " " + to_string(count) + "\n";
	return result;
}

int main()
{
	int how_many;
	string output = "";
	cin >> how_many;
	int* tab = new int[how_many];
	for (int i = 0; i < how_many; i++)
	{
		cin >> tab[i];
		output += count(tab[i]);
	}
	cout << output;
}