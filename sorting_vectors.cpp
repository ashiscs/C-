// SORTING VECTORS

#include<bits/stdc++.h>
#include<vector>

using namespace std;

class test {
    int id;
    string name;
    
    public:
    test(int id,string name){
        this->id = id;
        this->name = name;
    }
    void print()
    {
        cout<<id<<": "<<name<<"\n";
    }
    
    bool operator<(const test &other) const{
        return name < other.name;
    }
};

int main()
{
    vector<test> t;
    t.push_back(test(5,"Ashis"));
    t.push_back(test(4,"Ashi"));
    t.push_back(test(6,"Ash"));
    t.push_back(test(1,"As"));
    
    sort(t.begin(),t.end());
    
    for(int i=0;i<t.size();i++)
    {
        t[i].print();
    }
    return 0;
}

/* OUTPUT

1: As                                                      
6: Ash                                                     
4: Ashi                                                    
5: Ashis   

*/
