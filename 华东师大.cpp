#include <iostream>
using namespace std;
int main()
{
    int m=0,n=0,k=0; //mΪ����������nΪŮ��������kΪ��������
    cin>>m>>n>>k;
    int mt=1,nt=1;//mt,ntΪ�����ں�ѡ��Ե���Ա���
    int cycle =1;
    while(cycle<=k)
    {
        if(mt>m)
            mt=1;//��������ȫ�������Ҹ���δ�꣬����һ�ָ����ɱ�����Ա��һ�����¿�ʼ���
        if(nt>n)
            nt=1;
        cout<<mt<<" ";
        cout<<nt<<endl;
        mt++;
        nt++;
        cycle++;
    }
    return 0;
}
