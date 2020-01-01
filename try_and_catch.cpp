#include<iostream>
using namespace std;

void except1()
{
    bool string1=true;
    bool string2=true;
    if(string1)
    {
        throw "something went wrong";
    }
    if(string2)
    {
        throw string("Big error");
    }
}
void except()
{
    except1();
}
int main()
{
    try{
        except();
    }
    catch(char const * e)
    {
        cout<<"Error Caught "<<e<<endl;
    }
    catch(string e)
    {
        cout<<"Caught an error "<<e<<endl;
    }
    cout<<"Something went wrong!!";
    return 0;
}
