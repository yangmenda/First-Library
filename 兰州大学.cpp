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
		if (inistring[i] == inistring[i + 1])//��֮�����ظ����ַ�
		{
			count++;	//�������Լ�
			continue;	//�����˴�ѭ��������һ���ַ�
		}
		str += inistring[i];//��������ַ�ƴ��������str֮��
		str += to_string(count);//������ַ����ظ��������ڼ���ַ�֮��
		count = 1;//���ü�����
	}
	if (str.length() >= inistring.length())//��ѹ�����鳤��С��ѹ�����飬�������ѹ�����飬��Ϊ��ʱѹ���㷨ʧЧ
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