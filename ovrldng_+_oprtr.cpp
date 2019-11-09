#include<iostream>
using namespace std;
class comp
{
    float x,y;;
public:
    comp(){}
    comp(float real,float img)
    {
        x=real;
        y=img;
    }
    comp operator+(comp);
    void display(void);
};
comp comp::operator+(comp s)
{
    comp temp;
    temp.x = x + s.x;
    temp.y = y + s.y;
    return temp;
}
void comp::display(void)
{
    cout<<x<<" +j "<<y<<endl;;
}
int main()
{
    comp c1,c2,c3;
    c1=comp(2.5,3.5);
    c2=comp(1.6,2.7);
    c3=c1+c2;
    cout<<"c1 = "; c1.display();
    cout<<"c2 = ";c2.display();
    cout<<"c3 = ";c3.display();
    return 0;

}
