#include<iostream>
using namespace std;
int main()
{
    long long n, t;
    cin >> n;
    long long ans = 0, s = 0;//ansΪ������sΪi�Ľ׳���ı��� 
    for (int i = 1; i <= n; i++)
    {
        t = i;
        while (t % 5 == 0)//��t����5����i�Ľ׳���ı�����һ 
        {
            s++;
            t /= 5;
        }
        ans += s;//ans����i�Ľ׳���ı��� 
    }
    cout << ans << endl;//��� 
    return 0;
}