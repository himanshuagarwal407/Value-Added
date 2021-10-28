#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int gangster(int n, int arr[])
{
    sort(arr, arr+n);
    return (n%2==0) ? arr[n/2-1] : arr[n/2];
}

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++)  cin >> arr[i];
        
        cout << gangster(n, arr) << endl;
    }
    
    
    return 0;
}
