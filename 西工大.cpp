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
		if (n / 2 == 0)	//����ѭ���������̳������һλ��Ϊ�㣬�򽫴��������ѹ��ջ��
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