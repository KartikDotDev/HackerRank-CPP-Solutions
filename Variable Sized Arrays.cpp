#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <list>
#include <sstream>
using namespace std;

void getNumberFromString(string s) {
   stringstream str_strm;
   str_strm << s; //convert the string s into stringstream
   string temp_str;
   int temp_int;
   while(!str_strm.eof()) {
      str_strm >> temp_str; //take words into temp_str one by one
      if(stringstream(temp_str) >> temp_int) { 
        //try to convert string to int
        cout << temp_int << " ";
      }
      temp_str = ""; //clear temp string
   }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, q;
    vector<vector<int>> my_list;

    cin >> n >> q;
    
    for (int i = 0; i < n; i++) 
    {
        string s;
        cin >> s;
        my_list.resize(i++);
        stringstream str_strm;
        str_strm << s; //convert the string s into stringstream
        
        string temp_str;
        int temp_int;
        while(!str_strm.eof()) 
        {
            str_strm >> temp_str; 
            //take words into temp_str one by one
            if(stringstream(temp_str) >> temp_int) 
            { 
                //try to convert string to int
                my_list[i].push_back(temp_int);
            }
            temp_str = ""; //clear temp string
        }    
    }
    
    int p1,p2;
    for (int j; j < q; j++)
    {
        cin >> p1 >>p2;
        cout << my_list[p1][p2];
    }    
    return 0;
}
