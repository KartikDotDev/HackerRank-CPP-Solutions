#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string s1,s2;
    
    cin >> s1;
    cin >> s2;
    
    int si1, si2;
    si1 = s1.size(), si2 = s2.size();
    
    string s3 = s1 + s2;
    
    cout << si1 << " " << si2 << endl;
    cout << s3 << endl;
    char tmp = s1[0];
    s1[0] = s2[0];
    s2[0] = tmp;
    cout << s1 << " " << s2 << endl;
    
    return 0;
}
