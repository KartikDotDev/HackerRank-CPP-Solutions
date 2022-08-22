#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

// Write your Student class here

class Student
{
private:
    /* data */
    int scores[5];
    int sum;

public:
    Student(/* args */);
    void input();
    int calculateTotalScore() { return sum; }
    ~Student();
};

Student::Student(/* args */) : sum(0)
{
}

Student::~Student()
{
}

void Student::input()
{
    for (int i = 0; i < 5; i++)
    {
        cin >> scores[i];
        this->sum += scores[i];
    }
}

int main()
{
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students

    for (int i = 0; i < n; i++)
    {
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        int total = s[i].calculateTotalScore();
        if (total > kristen_score)
        {
            count++;
        }
    }

    // print result
    cout << count << endl;

    return 0;
}