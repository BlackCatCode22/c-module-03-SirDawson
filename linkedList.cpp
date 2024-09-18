/*
sD 9/17/24
linkedList.cpp
*/

#include <iostream>
#include <string>

using std::string, std::cout;

struct node
{
    string dataField;
    node* pNext;
};

void printList(node* pN)
{
    while(pN != nullptr)
    {
        cout << pN -> dataField << '\n';
        pN = pN -> pNext;
    }
}

int main()
{
    cout << "********************* My First Linked List Program! *********************\n\n";

    node* pHead = new node();
    node* pSecond = new node();
    node* pThird = new node();
    node* pNext = new node();

    pHead -> dataField = "z";
    pHead -> pNext = pSecond;
    pSecond -> dataField = "b";
    pSecond -> pNext = pThird;
    pThird -> dataField = "c";
    pThird -> pNext = nullptr;

    cout << "This is my linked list: \n\n";

    printList(pHead);

    // Add a few nodes to my list.
    node* pCurrent = new node();
    pCurrent -> dataField = "d";
    pCurrent -> pNext = pHead;

    // Reposition 'pHead' of the list.
    pHead = pCurrent;

    // Test by invoking 'prontList()'.
    cout << "\nPrinting the new linked list: \n\n";

    printList(pHead);

    cout << "\n********************* End of Program! *********************";

    system("pause>0");
}