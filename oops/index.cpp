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

// #include<iostream>

// using namespace std;

// class Student {

//     string name;

//     int age;

//     public:
//         void getDetails() {
//             cout << this->name << "  " << this->age << endl;
//         }

//     public:
//     Student( string name, int age ) {

//         this->name = name;

//         this->age = age;

//     }



// };

// int main () {

//     Student S1("zaid", 20);

//     S1.getDetails();

//     return 0;

// }

// static keyword ka use hum aise variable ya function ko define karne ke liye karte hain jo class ke sabhi objects ke liye common/shared ho.

// #include<iostream>

// using namespace std;

// class Customer {

//     string name;

//     int accountNumber, balance;

//     static int totalCustomer;

//     public:
//     Customer( string name, int accountNumber, int balance ) {

//         this->name = name;
//         this->balance = balance;
//         this->accountNumber = accountNumber;

//         totalCustomer++;
//     }

//     public:
//     void display() {
//         cout << "Your name is " << this->name
//         << " and your account Number is " << this->accountNumber
//         << " and your balance is " << this->balance
//         << endl;
//     }

//     static void showTotalCustomer() {
//         cout << "Your Total Customer is : " << totalCustomer << endl;
//     }
// };

// int Customer::totalCustomer = 0;

// int main () {

//     Customer C1("Zaid", 1, 1000);

//     Customer C2("Kaif", 2, 2000);

//     Customer C3("Aafiya", 3, 4000);

//     Customer C4("Zaibu", 4, 5000);

//     C3.display();

    

//     return 0;

// }

// access modifiers;

// public :- access in anywhere;

// private :- access only within a class;

// protected :- access derived class and within a class;


// #include<iostream>

// using namespace std;


// class Human {

//     public:
//     string name;

//     private:
//     int age;

//     protected:
//     string gender;

//     // within the class all access name age gender;

//     public:
//     void display() {
//         name = "Jhon";
//         age = 30;
//         gender = "male";
//     }


// };


// int main () {

//     Human H1;

//     H1.name = "zaid"; // access only name because it is public;

//     H1.display();

//     return 0;

// }

// single inheritance :- single derived class;

// #include<iostream>

// using namespace std;

// class Human {

//     protected:

//         string name;
//         int age;

//     public:

//         Human(string name, int age) {

//             this->name = name;
//             this->age = age;

//         }

// };

// class Student: public Human {

//     int rollNo,  fees;

//     public:
//     Student( string name, int age, int rollNo, int fees): Human(name, age) {

//         this->fees = fees;
//         this->rollNo = rollNo;

//     }

//     public:
//         void display() {

//             cout << name << " " << age << " " << rollNo << " " << fees << endl;

//         }

// };

// int main () {

//     Student S1("zaid", 20, 43, 500);

//     S1.display();

    


//     return 0;

// }