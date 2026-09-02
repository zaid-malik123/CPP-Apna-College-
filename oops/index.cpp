// #include<iostream>

// using namespace std;

// class Student {

    
//         string name;
//         string grade;
//         int age;

//     // getter & setter;

//     public:

//         void setName(string n) {
//             name = n;
//         }

//         string getName() {
//             return name;
//         }
    
        
// };

// int main () {

//     Student s1;

//     s1.setName("zaid");

//     cout << s1.getName() << endl;
    
//     return 0;

// }

// #include<iostream>

// using namespace std;

// class Student {

//     public: 
//         string name;
// };

// int main () {

//     Student *s1 = new Student;

//     (*s1).name = "zaid";

//     // cout << (*s1).name;

//     cout << s1->name;

//     return 0;

// }


// constructor;

// default & parameterized constructor;

// #include<iostream>

// using namespace std;

// class Customer {

//     public:
//     string name;
//     int age;

//     public:
//         // default constructor
//         Customer() {
//             cout << "Default Constructor Called";
//         }
//         // parameterized constructor
//         Customer(string name) {
//             this->name = name;
//             this->age = 20;
//         }

//         // Constructor Overloading when constructor name is same but diffrent parameters that is called constructor overloading;
//         Customer(string name, int age) {
//             this->name = name;
//             this->age = age;
//         }

//         // inline constructor;

//         // Customer ( string name, int age ) : name(name), age(age) {

//         // }


//         // copy constructor;

//         Customer(Customer &B) {

//             name = B.name;
//             age = B.age;

//         }

//     public: 
           
//         void display() {
//             cout << this->name << " " << this->age << " " << endl;
//         }

// };

// int main () {

//     Customer A("zaid");

//     Customer B("kaif" , 18);

//     Customer C(A);

//     A.display();
//     C.display();
//     B.display();

//     return 0;

// }