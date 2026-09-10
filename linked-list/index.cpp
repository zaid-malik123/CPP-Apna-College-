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