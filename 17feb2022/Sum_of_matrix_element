#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void sumMatrix()
{
    int n;
    cin >> n;
    
    int sum=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            int x;
            cin >> x;
            if(i==0 || i==(n-1) || j==0 || j==(n-1) || i==j || (i+j)==(n-1))
                sum+=x;
        }
        
    }
    
    cout << sum << endl;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin >> t;
    while(t--)
    {
        sumMatrix();
    }
    return 0;
}
