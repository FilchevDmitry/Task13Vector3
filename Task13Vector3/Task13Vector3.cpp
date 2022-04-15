#include <iostream>
#include<deque>
using namespace std;

int main()
{
	int numbers = 0;
	deque<int> num(5);
	while(numbers!=-1)
	{
		cout << "Input numbers ";
		cin >> numbers;
		if (numbers == -1)
			break;
		num.erase(begin(num));
		num.push_back(numbers);

	}
	for (auto i :num )
	{	
		if(i!=0)
		cout << i << " ";
	}
}
