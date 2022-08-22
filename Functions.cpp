#include <iostream>
#include <cstdio>
using namespace std;
#include <list>
#include <array>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int a, int b, int c, int d) {
    int max = a;
    array<int, 4> ls= {a, b, c, d};
    for (int x: ls)
    {
        if (max < x) max = x;
    }
    
    return max;
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
