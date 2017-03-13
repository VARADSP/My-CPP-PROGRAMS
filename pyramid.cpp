#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
    int i,j,k,n;
    cout << "Enter number of rows to print " ;
    cin >> n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<(n-i-1);j++)
        {
            cout << " " ;

        }
        for(k=0;k<(2*i+1);k++)
        {
            cout << "*";

        }
        cout << endl;

    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout << " ";

        }
        for(k=(2*n-2*i-3);k>0;k--)
            cout << "*";
        cout << endl;

    }
    return 0;


}
