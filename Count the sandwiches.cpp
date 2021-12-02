#include <iostream>
using namespace std;

int sandwiches(int n, int k)
{
    int ans=n, rem;
    while(n>=k)
    {
        ans += n/k;
        rem = n%k;
        n = n/k + rem;
    }
    
    return ans;
}

int main() {
    int t;
    cin >> t;
    
    while(t--)
    {
        int n,k,ans=0;
        cin >> n >> k;
        
        ans = sandwiches(n,k);

        cout << ans << endl;
    }
    return 0;
}
