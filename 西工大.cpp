#include <iostream>
#include <stack>
using namespace std;
int main()
{
	stack<int> s;
	int n;
	cin >> n;
	while (1)
	{
		if (n / 2 == 0)	//跳出循环条件，短除法最后一位商为零，则将此数求余后压入栈内
		{
			s.push(n % 2);
			break;
		}
		s.push(n % 2);
		n = n / 2;
	}
	while (s.empty() != true)
	{
		cout << s.top();
		s.pop();
	}

}