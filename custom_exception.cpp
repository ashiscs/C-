#include<iostream>
#include<exception>
using namespace std;

class MyException:public exception
{
public:
    virtual const char* what() const throw()
    {
        return "something went wrong";
    }
};

class test
{
public:
    void goesWrong(){
     throw MyException();
    }
};

int main()
{
    test t;
    try
    {
        t.goesWrong();
    }
    catch(MyException &e){

        cout<<e.what()<<endl;

    }
    cout<<"continue!!";
}
