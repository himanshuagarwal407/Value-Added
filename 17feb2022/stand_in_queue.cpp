#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void correctFormation()
{
    int n;
    cin >> n;
    
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    
    int prev=abs(arr[1]-arr[0]);
    for(int i=1; i<n-1; i++)
    {
        int curr = abs(arr[i+1]-arr[i]);
        if(abs(curr-prev)!=1)
        {
            cout << "Incorrect Formation"<< endl;
            return;
        }
        prev=curr;
    }
    
    cout << "Correct Formation" << endl;
    
    return;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    cin >>t;
    while(t--)
    {
        correctFormation();
    }
    return 0;
}
