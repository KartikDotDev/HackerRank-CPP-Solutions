#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    // Write your code here
    if(n < 10 && n > 0 )
    {
        if( n == 1) cout << "one" << endl;
        if (n == 2) cout << "two" << endl;
        if (n == 3) cout << "three" << endl;
        if (n == 4) cout << "four" << endl;
        if (n == 5) cout << "five" << endl;
        if (n == 6) cout << "six" << endl;
        if (n == 7) cout << "seven" << endl;
        if (n == 8) cout << "eight" << endl;
        if (n == 9) cout << "nine" << endl;
    } 
    else cout << "Greater than 9" << endl;

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
