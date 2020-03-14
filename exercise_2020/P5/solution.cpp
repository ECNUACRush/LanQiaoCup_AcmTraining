#include <bits/stdc++.h>

using namespace std;
bool contain(char c)
{
    if(c == 'a' || c=='e' || c =='i' || c=='o' || c=='u')
        return true;
    return false;
}
int main()
{
    string s;
    cin >> s;
    int i, cnt = 0;
    for(i = 0; i < s.size(); ++i)
    {
        if(contain(s[i])!=contain(s[i-1]))
            cnt++;
    }
    if(cnt == 3 && contain(s[i - 1])) // 中间元/辅音切换3次，且以元音结尾。
        cout << "yes" ;
    else
        cout << "no" ;
    return 0;
}