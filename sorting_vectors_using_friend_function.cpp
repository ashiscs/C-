// sorting_vectors_using_friend_function

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
    
    friend bool comp(const test &a, const test &b);
};

bool comp(const test &a, const test &b) {
    return a.name < b.name;
}

int main()
{
    vector<test> t;
    t.push_back(test(5,"Ashis"));
    t.push_back(test(4,"Ashi"));
    t.push_back(test(6,"Ash"));
    t.push_back(test(1,"As"));
    
    sort(t.begin(),t.end(),comp);
    
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
