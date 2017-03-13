#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n;
    int space;

    cout << "Enter no of rows";
    cin >> n;

    space=n-1;

    for(i=0;i<n;i++)
    {
        for(j=0;j<space;j++)
        {
            cout << " " ;

        }
        space--;
        for(k=0;k<=n-1-j;k++)
        {
            cout << "x " ;

        }
        cout << "\n";


    }
return 0;
}

