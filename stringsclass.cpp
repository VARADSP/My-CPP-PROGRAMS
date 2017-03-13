//defining and assigning string objects
#include<iostream>
using namespace std;
#include<string>
int main()
{
    string s1("Man");
    string s2="Beast";
    string s3;

    s3=s1;
    cout << "s3 = " << s3 << endl;

    s3="Neither " + s1 + "nor" ;

    s3 += s2;
    cout << "s3 = " << s3 << endl;

    s1.swap(s2);

    cout << s1 << "nor " << s2 << endl;


    string full_name,nickname,address;
    string greetings("Hello " );

    cout << "Enter your full name " ;
    getline(cin,full_name);
    cout << "Enter your nickname ";
    getline(cin,nickname);

    greetings += nickname;
    cout << greetings << endl;

    cout << "Enter your address on separate lines\n";
    cout << "Terminate with '$'\n";
    getline(cin,address,'$');
    cout << "Your address is " << address << endl;
    return 0;

}
