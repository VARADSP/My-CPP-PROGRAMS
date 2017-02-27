//structure variables as array elements
#include<iostream>
using namespace std;
const int SIZE = 4;
///////////////////////////////////////////
struct part
{
    int modelno;
    int partno;
    float cost;

};
////////////////////
int main()
{
    int n;
    part apart[SIZE];
    for (n=0;n<SIZE;n++)
    {
        cout << endl;
        cout << "Enter model number ";
        cin >> apart[n].modelno;
        cout << "Enter part number ";
        cin >> apart[n].partno;
        cout << "Enter the cost ";
        cin >> apart[n].cost;


    }
    cout << endl;
    for (n=0;n<SIZE;n++)
    {
        cout << "Model " << apart[n].modelno;
        cout << "Part " << apart[n].partno;
        cout << "cost " << apart[n].cost << endl;

    }
    return 0;

}
