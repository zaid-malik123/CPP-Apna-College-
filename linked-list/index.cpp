// Linked List ek linear data structure hai jisme elements (nodes) memory me contiguous nahi hote, aur har node next node ka address/reference store karta hai.

// Linked List creation and Traversing;

// #include<iostream>

// using namespace std;

// class Node {

//     public:
//         int data;
//         Node *next;

//         Node(int value) {

//             data = value;
//             next = NULL;

//         }

// };

// int main() {

//     Node *Head;

//     Head = NULL;

//     int arr[] = {1, 2, 3, 4};

//     for ( int i = 0; i < 4; i++ ) {

//         if( Head == NULL ) {

//             Head = new Node(arr[i]);

//         }

//         else {

//             Node *temp;

//             temp = new Node(arr[i]);

//             temp->next = Head;

//             Head = temp;

//         }
//     }

//     Node *temp = Head;

//     while (temp)
//     {
//         /* code */

//         cout << temp->data << " ";

//         temp = temp->next;
//     }

//     cout << endl;

//     return 0;
// }

// Revision Linked List Start Inserting & Traversing;

// #include<iostream>

// using namespace std;

// class Node {

//     public:
//         int data;

//         Node *next;

//         Node( int v ) {

//             data = v;
//             next = NULL;
//         }
// };

// int main () {

//     int arr[] = { 1, 2, 3, 4 };

//     Node *Head;

//     Head = NULL;

//     for ( int i = 0; i < 4; i++ ) {

//         if( Head == NULL ) {

//             Head = new Node(arr[i]);

//         }

//         else {

//            Node *temp;

//            temp = new Node(arr[i]);

//            temp->next = Head;

//            Head = temp;

//         }
//     }

//     Node *temp = Head;

//     while (temp)

//     {
//         /* code */

//         cout << temp->data << " ";

//         temp = temp->next;

//     }

//     cout << endl;

//     return 0;

// }

// add element in last;

// #include <iostream>

// using namespace std;

// class Node
// {
// public:
//     int data;

//     Node *next;

//     Node(int v)
//     {

//         data = v;

//         next = NULL;
//     }
// };

// int main()
// {

//     Node *Head = NULL;
//     Node *Tail = NULL;

//     int arr[] = {1, 2, 3, 4};

//     for (int i = 0; i < 4; i++)
//     {

//         if (Head == NULL)
//         {

//             Head = new Node(arr[i]);
//             Tail = Head;
//         }

//         else
//         {

//             Tail->next = new Node(arr[i]);
//             Tail = Tail->next ;

//         }
//     }

//     Node *temp = Head;

//     while (temp)
//     {
//         /* code */

//         cout << temp->data << " ";
//         temp = temp->next;

//     }

//     cout << endl;

//     return 0;
// }

// Add Node at end Using Recursion;

// #include <iostream>

// using namespace std;

// class Node
// {
// public:
//     int data;

//     Node *next;

//     Node(int v)
//     {

//         data = v;

//         next = NULL;
//     }
// };

// Node * CreateLL(int arr[], int i, int n)
// {

//     if (i == n)
//     {

//         return NULL;
//     }

//     Node *temp;

//     temp = new Node(arr[i]);

//     temp->next = CreateLL(arr, i+1, n);

//     return temp;
// }

// int main()
// {

//     int arr[] = {1, 2, 3, 4};

//     int n = 4;

//     int i = 0;

//     CreateLL(arr, i, n);

//     return 0;
// }

// #include<iostream>

// using namespace std;

// class Node
// {
// public:
//     int data;

//     Node *next;

//     Node(int v)
//     {

//         data = v;

//         next = NULL;
//     }
// };

// Node * createLL( int arr[], int i, int n, Node *prev ) {

//     if( i == n ) {

//         return prev;

//     }

//     Node * temp;

//     temp = new Node(arr[i]);

//     temp->next = prev;

//     return (arr, i+1, n, temp);

// };

// int main () {

//     return 0;

// }

// #include <iostream>

// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int val) {
//         data = val;
//         next = NULL;
//     }
// };

// void insertAtNodeInLL(int data, Node*& Head) {

//     Node* temp = new Node(data);

//     if (Head == NULL) {
//         Head = temp;
//         return;
//     }

//     Head->next = temp;
//     Head = temp;
// }

// void printLL(Node*& Head) {

//     Node* temp = Head;

//     while (temp) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
// }

// int main() {

//     int arr[5] = {1, 2, 3, 4, 5};
//     int n = 5;

//     Node* Head = NULL;

//     for (int i = 0; i < n; i++) {
//         insertAtNodeInLL(arr[i], Head);
//     }

//     printLL(Head);

//     return 0;
// }

// #include<iostream>

// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int val) {
//         data = val;
//         next = NULL;
//     }
// };

// void InsertAtTail( int data, Node *Tail) {

//     Node *temp;

//     temp = new Node(data);

//     Tail->next = temp;

//     Tail = temp;

// }

// void printLL(Node*& Head) {

//     Node* temp = Head;

//     while (temp) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
// }

// int main () {

//     int arr[] = { 1, 2, 3, 4, 5 };

//     int n = 5;

//     Node *Head = NULL;

//     Node * Tail = Head;

//     for ( int i = 0; i < n; i++ ) {

//         InsertAtTail(arr[i], Tail);

//     }

//     printLL(Head);

//     return 0;

// }

// #include<iostream>

// using namespace std;

// class Node {

//     public:

//         int data;

//         Node *next;

//         Node( int val ) {

//             data = val;
//             next = NULL;

//         }
// };

// int main () {

//     int arr[] = { 1, 2, 3, 4, 5 };

//     int n = 5;

//     Node *Head = NULL;

//     for ( int i = 0; i < n; i++ ) {

//         if( Head == NULL ) {

//             Head = new Node(arr[i]);

//         }

//         else {

//             Node *temp;

//             temp = new Node(arr[i]);

//             temp->next = Head;

//             Head = temp;

//         }
//     }

//     Node *temp = Head;

//     while (temp)
//     {
//         /* code */

//         cout << temp->data << " ";

//         temp = temp->next;

//     }

//     cout << endl;

//     return 0;

// }

// #include<iostream>

// using namespace std;

// class Node {

//     public:

//         int data;

//         Node *next;

//         Node( int val ) {

//             data = val;
//             next = NULL;

//         }
// };

// int main () {

//     int arr[] = { 1, 2, 3, 4, 5 };
//     int n = 5;

//     Node *Head = NULL;

//     Node *Tail = NULL;

//     for ( int i = 0; i < n; i++ ) {

//         if( Head == NULL ) {

//             Head = new Node(arr[i]);

//             Tail = Head;

//         }

//         else {

//             Tail->next = new Node(arr[i]);

//             Tail = Tail->next;

//         }
//     }

//     Node *temp = Head;

//     while (temp)
//     {
//         /* code */

//         cout << temp->data << " ";

//         temp = temp->next;

//     }

//     cout << endl;

//     return 0;

// }

// inserting at the end using recursion;

// #include<iostream>

// using namespace std;

// class Node {

//     public:

//         int data;

//         Node *next;

//         Node( int val ) {

//             data = val;
//             next = NULL;

//         }
// };

// Node * LinkedList( int arr[], int n, int i ) {

//     if( i == n ) {

//         return NULL;

//     }

//     Node *temp;

//     temp = new Node(arr[i]);

//     temp->next = LinkedList(arr, n, i+1);

//     return temp;

// };

// void printLL(Node*& Head) {

//     Node* temp = Head;

//     while (temp) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
// }

// int main () {

//     int arr[] = { 1, 2, 3, 4, 5,6,7};

//     int n = 7;

//     Node *Head = NULL;

//     Head = LinkedList (arr, n, 0);

//     printLL(Head);

//     cout << endl;

//     return 0;
// }

// insert at the begining at the start using recursion;

// #include<iostream>

// using namespace std;

// class Node {

//     public:
//         int data;
//         Node *next;

//         Node( int data ) {
//             this->data = data;
//             next = NULL;
//         }
// };

// Node * createLL( int arr[], int n, int i, Node *add ) {

//     if( i == n ) {

//         return add;

//     }

//     Node *temp;
//     temp = new Node(arr[i]);

//     temp->next = add;

//     return createLL(arr, n, i+1, temp);

// };

// void printLL(Node*& Head) {

//     Node* temp = Head;

//     while (temp) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
// }

// int main () {

//     int arr[] = { 1, 2, 3, 4, 5 };

//     int n = 5;

//     Node *Head = NULL;

//     Head = createLL(arr, n, 0, NULL );

//     printLL(Head);

//     cout << endl;

//     return 0;

// }

// insert at particular position;

// #include<iostream>

// using namespace std;

// class Node {

//     public:

//         int data;

//         Node *next;

//         Node( int val ) {

//             data = val;
//             next = NULL;

//         }
// };

// int main () {

//     int arr[] = { 1, 2, 3, 4, 5 };
//     int n = 5;

//     Node *Head = NULL;

//     Node *Tail = NULL;

//     for ( int i = 0; i < n; i++ ) {

//         if( Head == NULL ) {

//             Head = new Node(arr[i]);

//             Tail = Head;

//         }

//         else {

//             Tail->next = new Node(arr[i]);

//             Tail = Tail->next;

//         }
//     }

//     int x = 2;

//     int val = 8;

//     Node * posAdd = Head;

//     x--;

//     while (x)
//     {
//         /* code */
//         posAdd = posAdd->next;
//         x--;

//     }

//     Node *posAddTemp = new Node(val);

//     posAddTemp->next = posAdd->next;
//     posAdd->next = posAddTemp;

//     Node *temp = Head;

//     while (temp)
//     {
//         /* code */

//         cout << temp->data << " ";

//         temp = temp->next;

//     }

//     cout << endl;

//     return 0;

// }

// lecture 2 Linked List;

#include <iostream>

using namespace std;

class Node
{

public:
    int data;

    Node *next;

    Node(int val)
    {

        data = val;
        next = NULL;
    }
};

void printLL(Node *&Head)
{

    Node *temp = Head;

    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5};

    int n = 5;

    Node *Head = NULL;

    for (int i = 0; i < n; i++)
    {

        if (Head == NULL)
        {

            Head = new Node(arr[i]);
        }

        else
        {

            Node *temp;

            temp = new Node(arr[i]);

            temp->next = Head;

            Head = temp;
        }
    }

    // delete the first node;

    // if (Head != NULL)
    // {

    //     Node *temp = Head;

    //     Head = Head->next;

    //     delete temp;
    // }

    // delete the last Node;

    // if ( Head != NULL ) {

    //     // if single node exist;

    //     if ( Head->next == NULL ) {

    //         Node *temp = Head;

    //         delete temp;

    //         Head = NULL;

    //     }

    //     // else multiple Node exist;
    //     else {

    //         Node *curr = Head;

    //         Node *prev = NULL;

    //         while (curr->next != NULL)
    //         {
    //             /* code */

    //             prev = curr;

    //             curr = curr->next;

    //         }

    //         delete curr;

    //         prev->next = NULL;
            

    //     }
    // }

    // delete at the particular node;

//     int x = 3;

//     x--;

//     Node *curr = Head;

//     Node *prev = NULL;

//     if ( x == 1 ) {

//         Node *temp = Head;

//         Head = Head->next;

//         delete temp;

//     }

//     while (x--)
//     {
//         /* code */

//         prev = curr;

//         curr = curr->next;

//     }

//     prev->next = curr->next;

//     delete curr;
    

//     printLL(Head);

//     return 0;
// }