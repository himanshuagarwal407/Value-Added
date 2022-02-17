#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void complementMultiplication()
{
    int n;
    cin >> n;
    
    int bit_count = floor(log2(n))+1;
    int ones = ((1<<bit_count)-1);
    
    int comp = ones^n;
    
    cout << n*comp << endl;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin >> t;
    while(t--)
    {
        complementMultiplication();
    }
    return 0;
}
