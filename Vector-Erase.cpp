#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    vector<int> v;
    int n;
    cin >> n;
    
    for ( int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }  
    int m, o, p;
    cin >> m;
    cin >> o >> p;
    v.erase(v.begin() + m -1);
    v.erase(v.begin() + o - 1, v.begin() + p -1);
    
    cout << v.size() << endl;
    for (int x: v)
    {
        cout << x << " ";
    }
    
    return 0;
}
