#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<string> strings;
    strings.push_back("Ashis");
    strings.push_back("College");
    strings.push_back("Student");
    cout<<"----1st Way----"<<endl;
    for(int i=0;i<strings.size();i++)
    {
        cout<<strings[i]<<endl;
    }
    cout<<"----2nd Way----"<<endl;
    vector<string>::iterator it = strings.begin();

    cout<<*it<<endl;
    cout<<"----3rd Way----"<<endl;
    for(vector<string>::iterator it = strings.begin(); it != strings.end(); it++)
    {
        cout<<*it<<endl;
    }
}
