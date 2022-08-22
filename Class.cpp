#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/

class Student
{
private:
    /* data */
    int _age, _std;
    string _first_name, _last_name;
public:
    Student(/* args */);
    ~Student();
    void set_age(int age);
    void set_standard(int std);
    void set_first_name(string f_name);
    void set_last_name(string l_name);
    int get_age() {return this->_age ;};
    string get_last_name() {return this->_last_name; };
    string get_first_name() {return this->_first_name; };
    int get_standard() {return this->_std;};
    string to_string();
};

Student::Student(/* args */)
{
}

Student::~Student()
{
}

void Student::set_age(int age)
{
    this->_age = age;
}

void Student::set_first_name(string name)
{
    this->_first_name = name;
}
void Student::set_last_name(string name)
{
    this->_last_name = name;
}
string Student::to_string()
{
    return  std::to_string(this->_age) + "," + this->_first_name + "," + this->_last_name + "," + std::to_string(this->_std);
}


int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}