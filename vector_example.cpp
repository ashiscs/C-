#include<iostream>
#include<vector>

using namespace std;

class test {
    int id;
    string name;
    
    public:
    test(int id,string name): id(id),name(name) {}
    void print()
    {
        cout<<id<<": "<<name<<"\n";
    }
};

int main()
{
    vector<test> t;
    t.push_back(test(5,"Ashis"));
    t.push_back(test(4,"Ashi"));
    t.push_back(test(6,"Ash"));
    t.push_back(test(1,"As"));
    
    for(int i=0;i<t.size();i++)
    {
        t[i].print();
    }
    return 0;
}

/* OUTPUT

5: Ashis                                                        
4: Ashi                                                         
6: Ash                                                          
1: As 

*/
