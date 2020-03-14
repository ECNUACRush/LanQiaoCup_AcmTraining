#include <iostream>
#include <algorithm>
using namespace std;
int n, m;

int main()
{
    int a[100009] = {0};
    int b[100009] = {0};
    int cnt, i = 0;
    cin >> n >> m;
    for(i = 0; i < n; ++i)
        cin >> a[i];
    for(cnt = 0; cnt < m; ){
        for(i = 0; i < n; ++i)
        {
            if(a[i] == *max_element(a, a+n))
            {
                swap(a[i], b[i]);
                cnt++;
                break;
            }
        }
    }
    for(i = 0; i < 100009; ++i)
        if(b[i]) cout << b[i] << ' ';
    return 0;
}
