//linked list
#include<iostream>
using namespace std;

///////////////////////
struct link
{
    int data;
    link *next;
};

class linklist
{
private:
    link *first;
public:
    linklist()
    {
        first == NULL;
    }
    void additem(int d);
    void display();

};

void linklist :: additem(int d)
{
    link *newlink = new link;
    newlink->data = d;
    newlink->next = first;
    first = newlink;

}
///////////////////////////
void linklist :: display()
{
    link *current = first;
    while(current != NULL)
    {
        cout << current->data << endl;
        current = current->next;

    }
}

//////////////
int main()
{

    linklist li;

    li.additem(20);
    li.additem(10);
    li.additem(24);
    li.additem(25);
    li.display();
    return 0;


}
