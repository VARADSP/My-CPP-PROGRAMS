//parse.cpp
//parsing an arithmatic expression using stack
#include<iostream>
#include<conio.h>
#include<cstring>
#include<stdlib.h>
using namespace std;
const int MAX = 50;
const int LEN =80;
class Stack
{
private:
    char st[MAX];
    int top;
public:
    Stack()
    {
        top = 0;

    }
    void push(char var)
    {
        st[++top]=var;


    }
    char pop()
    {
        return st[top--];
    }
    int gettop()
    {
        return top;
    }


};

////////////////
class express
{
private:
    Stack s;
    char *pstr;
    int len;
public:
    express(char *str)
    {
        pstr = str;
        len = strlen(pstr);
    }
    void parse();
    int solve();

};

void express :: parse()
{
    char ch;
    char lastval;
    char lastop;

    for(int j=0;j<len;j++)
    {
        ch = pstr[j];
        if(ch >= '0' && ch <= '9')
        {
            s.push(ch-'0');

        }

        else if(ch == '+' || ch == '-' || ch == '*' || ch == '/' )
        {
            if(s.gettop() == 1)
                s.push(ch);
        else
        {
            lastval = s.pop();
            lastop = s.pop();
            // if this is * AND last operator was + or -
            if((ch == '*' || ch == '/') && (lastop == '+' || lastop == '-'))
            {
                s.push(lastop);
                s.push(lastval);

            }
            else
            {
                switch(lastop)
                {
                    case '+' : s.push(s.pop() + lastval);break;
                    case '-' : s.push(s.pop() - lastval);break;
                    case '*' : s.push(s.pop() * lastval);break;
                    case '/' : s.push(s.pop() / lastval);break;
                    default : cout << "\nUnknown operator" ; exit(1);


                }//end switch
            }//end else   in all other cases
            s.push(ch); // put current op on stack


        }

    }


} // end parse()
}

////////////////////////////////////////////////
int express :: solve()
{
    char lastval;
    while(s.gettop() > 1)
    {
        lastval = s.pop();
        switch(s.pop())
        {
            case '+' : s.push(s.pop() + lastval);break;
            case '-' : s.push(s.pop() - lastval);break;
            case '*' : s.push(s.pop() * lastval);break;
            case '/' : s.push(s.pop() / lastval);break;
            default : cout << "\nUnknown character" ; exit(1);

        }//end switch

    }//end while
    return int(s.pop());
}//end solve
/////////////////////////////////////////////
int main()
{
    char ans;
    char String[LEN];

    cout << "\n Enter an arithmatic expression \n of the form 2+3*4/3-2 \n no number may have more than one digit \n Don't use any spaces or parentheses";

    do
    {
        cout << "\n Enter expression " ;
        cin >> String;
        express *eptr = new express(String);
        eptr -> parse();
        cout << "\n The numerical value is  " << eptr -> solve();
        delete eptr;
        cout << "\n Do another (Enter y or n )? ";
        cin >> ans;

    }while(ans == 'y');
    return 0;

}
