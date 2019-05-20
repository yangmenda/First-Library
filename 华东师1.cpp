#include <iostream>
using namespace std;
float cal(char a[])
{
	char n1 = a[0];
	char op = a[1];
	char n2 = a[2];
	if (op == '+')return (n1 - '0') + (n2 - '0'); //将结果转化成数字
	else if (op == '-')return n1 - n2;   //减法不受影响
	else if (op == '*')return (n1 - '0')*(n2 - '0');
	else return (n1 - '0' - 0.0) / (n2 - '0');
}
int main()
{
	char str[3];
	cin >> str;
	float result = cal(str);
	cout << result << endl;
	return 0;
}
