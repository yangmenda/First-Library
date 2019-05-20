#include <iostream>
using namespace std;
int main()
{
    int m=0,n=0,k=0; //m为男生人数，n为女生人数，k为舞曲轮数
    cin>>m>>n>>k;
    int mt=1,nt=1;//mt,nt为本组内候选配对的人员序号
    int cycle =1;
    while(cycle<=k)
    {
        if(mt>m)
            mt=1;//若本组人全部跳过且歌曲未完，则下一轮歌曲由本组人员第一个重新开始配对
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
