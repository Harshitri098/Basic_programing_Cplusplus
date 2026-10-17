#include<iostream>
#include<string>
using namespace std;

class calculator 
{
public:
    int number ;
     

    calculator(int a)
    {
        number  = a * 3 ;
    }
}; 

int main()
{
    calculator c1(10);
    calculator c2(20);

    cout<< c1.number << endl;
    cout<< c2.number << endl;

    return 0;

}

    

    