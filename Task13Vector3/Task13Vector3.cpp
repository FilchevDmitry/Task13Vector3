#include <iostream>
#include<deque>
using namespace std;

int main()
{
	int numbers = 0;
	deque<int> num;
	while(numbers!=-1)
	{
		if (num.size() <= 20)
		{
			cout << "Input numbers ";
			cin >> numbers;
			if (numbers != -1)
				num.push_back(numbers);
		}
		if(num.size()>20)
		{
			num.erase(begin(num));
			cout << "Input numbers ";
			cin >> numbers;
			if (numbers != -1)
			num.push_back(numbers);
		}
	}
	for (int i = 0; i <num.size(); i++)
	{
		cout << num.at(i) << " ";
	}
}
