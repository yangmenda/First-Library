#include <iostream
#include <algorithm>
using namespace std;
typedef struct{
    int hour;
    int min;
    int sec;
}time;
typedef struct{
    char id[100];
    time t1,t2;
    int worktime;
}employee;
bool cmp1(employee a, employee b)
{
    if(a.t1.hour!=b.t1.hour)
        return a.t1.hour<b.t1.hour;
    else if(a.t1.min!=b.t1.min)
        return a.t1.min<b.t1.min;
    else
        return a.t1.sec<b.t1.sec;
}
bool cmp2(employee a, employee b)
{
    if(a.t2.hour!=b.t2.hour)
        return a.t2.hour>b.t2.hour;
    else if(a.t2.min!=b.t2.min)
        return a.t2.min>b.t2.min;
    else
        return a.t2.sec>b.t2.sec;
}
bool cmp3(employee a, employee b)
{

    return a.worktime>b.worktime;
}
int main()
{
    employee em[100];
    
}
