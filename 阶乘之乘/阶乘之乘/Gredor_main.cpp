#include<iostream>
using namespace std;
int main()
{
    long long n, t;
    cin >> n;
    long long ans = 0, s = 0;//ans为总数，s为i的阶乘五的倍数 
    for (int i = 1; i <= n; i++)
    {
        t = i;
        while (t % 5 == 0)//若t整除5，则i的阶乘五的倍数加一 
        {
            s++;
            t /= 5;
        }
        ans += s;//ans加上i的阶乘五的倍数 
    }
    cout << ans << endl;//输出 
    return 0; 
}