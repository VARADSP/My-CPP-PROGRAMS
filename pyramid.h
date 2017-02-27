#include<iostream.h>
using namespace std;
#include<conio.h>
int main()
{
    float i,j,k;
    int space;
    cout << "Enter number of rows to print " ;
    cin >> k;
    for (i=0;i<k/2;i++)
    {
        cout << "  ";
        space++;
        for(j=0;j<=space;j++)
        {
            cout << "x";
        }
        cout << "\n";
    }
    return 0;


}
