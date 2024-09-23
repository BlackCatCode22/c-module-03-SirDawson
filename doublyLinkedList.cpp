/*
sD 9/23/24
doublyLinkedList.cpp
*/

#include <iostream>
#include <string>

using std::string, std::cout;

struct node
{
    string dataField;
    node* pNext;
    node* pPrev;  // New pointer to the previous node
};

void printListForward(node* pN)
{
    while (pN != nullptr)
    {
        cout << pN -> dataField << '\n';
        pN = pN -> pNext;
    }
}

void printListBackward(node* pN)
{
    while (pN -> pNext != nullptr) // Move to the last node
    {
        pN = pN -> pNext;
    }
    
    while (pN != nullptr) // Traverse backward using pPrev
    {
        cout << pN -> dataField << '\n';
        pN = pN -> pPrev;
    }
}

int main()
{
    cout << "********************* My First Doubly Linked List Program! *********************\n\n";

    node* pHead = new node();
    node* pSecond = new node();
    node* pThird = new node();

    pHead -> dataField = "z";
    pHead -> pNext = pSecond;
    pHead -> pPrev = nullptr;

    pSecond -> dataField = "b";
    pSecond -> pNext = pThird;
    pSecond -> pPrev = pHead;

    pThird -> dataField = "c";
    pThird -> pNext = nullptr;
    pThird -> pPrev = pSecond;

    cout << "This is my doubly linked list (forward order): \n\n";
    printListForward(pHead);

    node* pCurrent = new node();
    pCurrent -> dataField = "d";
    pCurrent -> pNext = pHead;
    pCurrent -> pPrev = nullptr;

    pHead -> pPrev = pCurrent;  // Link former head's previous to the new head

    // Reposition 'pHead' to point to the new head
    pHead = pCurrent;

    // Test by invoking 'printListForward()'
    cout << "\nPrinting the updated doubly linked list (forward order): \n\n";
    printListForward(pHead);

    // Test by invoking 'printListBackward()'
    cout << "\nPrinting the updated doubly linked list (backward order): \n\n";
    printListBackward(pHead);

    cout << "\n********************* End of Program! *********************";

    node* pTemp;
    while (pHead != nullptr)
    {
        pTemp = pHead;
        pHead = pHead->pNext;
        delete pTemp;
    }

    system("pause>0");
}
