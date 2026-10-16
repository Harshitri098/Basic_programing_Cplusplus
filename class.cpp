#include<iostream>
#include<string>
using namespace std;

class student
{
public:
    string name ;
    int age ;
    int marks ;

    void displayinfo()
    {
        cout<< " my name is " << name  << " ! "<< endl;
        cout<< " I am  " << age << " years old " << endl;
        cout<< " i got " << marks << " in my paper " << endl;
    }

};

int main()
{
    student s1 ;
    student s2 ;

    s1.name = " harshit ";
    s1.age = 21 ;
    s1.marks = 67 ;

    s2.name = " arpit ";
    s2.age = 20 ;
    s2.marks = 30 ;

    s1.displayinfo();
    s2.displayinfo();

    return 0;

}
