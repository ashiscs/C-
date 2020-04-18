// STL_Complex_Data_Types

#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main()
{
    map<string, vector<int> > scores;

    scores["Ashis"].push_back(10);
    scores["Monu"].push_back(20);
    scores["Sim"].push_back(15);

    for(map<string, vector<int> >::iterator it=scores.begin(); it!=scores.end();it++)
    {
        string name = it->first;
        vector<int> scoreList = it->second;

        cout<<name<<": "<<flush;

        for(int i=0;i<scoreList.size();i++) {
                cout<< scoreList[i]<<" "<<flush;
    }
    cout<<endl;
}
return 0;
}


/* OUTPUT

Ashis: 10                                                              
Monu: 20                                                               
Sim: 15 

*/
