#include<iostream>
using namespace std;

class CanGoWrong{
public:
    CanGoWrong()
    {
        char *pMemory = new char[999999999999999];
        delete pMemory;
    }
};

int main()
{
try{
    CanGoWrong wrong;
}
catch(bad_alloc &e)
{
    cout<<"Caught Exception "<<e.what()<<endl;
}
cout<<"Still Running" <<endl;
return 0;
}
