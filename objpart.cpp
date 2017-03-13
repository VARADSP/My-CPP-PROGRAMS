//objpart.cpp
//Widget part as an object
#include<iostream>
using namespace std;
/////////////////////////////////////////////
class part
{
private:
    int modelnumber;
    int partnumber;
    float cost;
public:
    void setdata(int mn,int pn, float c)
    {


    modelnumber = mn;
    partnumber = pn;
    cost = c;
    }
    void showdata()
    {
        cout << "Model " << modelnumber ;
        cout << ", Part " << partnumber;
        cout << ", Cost $" << cost ;

    }

};
int main()
{
    part part1;
    part1.setdata(6323,373,217.55F);
    part1.showdata();
    return 0;
}
