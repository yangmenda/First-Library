#include <iostream>
#include <string>
using namespace std;
#define max 100
string compress(string inistring)
{
	string str;
	int count = 1;
	for (int i = 0; i < inistring.length(); ++i)
	{
		if (inistring[i] == inistring[i + 1])//若之后有重复的字符
		{
			count++;	//计数器自加
			continue;	//结束此次循环，看下一个字符
		}
		str += inistring[i];//将这个的字符拼接至数组str之后
		str += to_string(count);//将这个字符的重复次数接在检测字符之后
		count = 1;//重置计数器
	}
	if (str.length() >= inistring.length())//被压缩数组长度小于压缩数组，则输出被压缩数组，因为此时压缩算法失效
		return inistring;
	return str;
}
int main()
{
	char str[max];
	cin >> str;
	string s = compress(str);
	cout << s << endl;
	system("pause");
	return 0;
}