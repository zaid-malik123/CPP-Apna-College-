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

// multilevel:- single parent class multiple derived class;


// #include<iostream>

// using namespace std;

// class Person {
//     public:
//     string name;

//     public:
//         void intro() {

//             cout << "I Am " << name << endl;

//         }
    
// };

// class Employee: public Person {
//     public:
//     int salary;

//     public:
//         void myMonthlySalary() {

//             cout << "My Monthly Salary is " << salary << endl;

//         }

// };

// class Manager: public Employee {

//     string department;

//     public:
//         Manager(string name, int salary, string department) {
//             this->name = name;
//             this->salary = salary;
//             this->department = department;
//         }

//     void departmentLead() {
//         cout << "I'm Managing the department is " << department << endl;
//     }

// };

// int main () {

//     Manager M1("ZAID", 100, "IT");
//     Manager M2("KAIF", 200, "FINANCE");

//     M2.myMonthlySalary();

//     return 0;
// }

// multiple inheritance;

// #include<iostream>

// using namespace std;

// class Engineer {

//     public:
//      string specialization;

//     void spec() {
//         cout << "I Have speacialization in " << specialization << endl;
//     }


// };

// class Youtuber {

//     public:
//         int subscriberCount;

//     void subs() {
//         cout << "My Channel Subscriber Count is " << subscriberCount << endl;
//     }

// };

// class Teacher: public Engineer, public Youtuber {

//     public:
//     string name;
//     string subjectTeacher;

//     Teacher(string name, string subjectTeacher, string specialization, int subsCount) {

//         this->name = name;
//         this->subjectTeacher = subjectTeacher;
//         this->specialization = specialization;
//         this->subscriberCount = subsCount;
//     }

//     void display () {
        
//         cout << "You'r name is " << name << "  and you teach the subject is " << subjectTeacher << endl;

//         spec();

//         subs();
//     }


// };

// int main () {

//     Teacher T1("zaid", "C++", "CSE", 40000);
//     Teacher T2("kaif", "Physics", "Civil", 40000);

//     T1.display();

//     T2.display();

//     return 0;

// }

// Hierarichal Inheritance :-  single parent class multiple child class;


// #include<iostream>

// using namespace std;

// class Human {

//     public:
//     string name;

//     void showName() {
//         cout << "Your name is " << name << endl;
//     }
// };

// class Student: public Human {

//     public:
//         int rollNo;

//     Student(string name, int rollNo) {

//         this->name = name;
//         this->rollNo = rollNo;

//     }

//     void showStudent () {
//         cout << "Student name is " << name << "  and roll No " << rollNo << endl;
//     }

// };

// class Teacher: public Human {

//     public:
//         int salary;
    
//     Teacher( string name, int salary) {

//         this->name = name;
//         this->salary = salary;

//     }

//     void showTeacher () {
//         cout << "Teacher name is " << name << "  and salary is " << salary << endl;
//     }

// };

// int main () {

//     Teacher T1("zaid", 12000);

//     Student S1("kaif", 23);

//     T1.showTeacher();

//     S1.showStudent();

//     return 0;

// }

// #include<iostream>

// using namespace std;

// class Student {

//     public: 
//         void print() {
//             cout << "I am Student";
//         }
// };

// class Male {

//     public: 
//         void printMale() {
//             cout << "I am Male";
//         }

// };

// class Female {

//     public: 
//         void printFemale() {
//             cout << "I am Female";
//         }

// };

// class Boy: public Student, public Male {

//     public: 
//         void printBoy() {
//             cout << "I am Boy";
//         }

// };

// class Girl: public Student, public Female {

//     public: 
//         void printGirl() {
//             cout << "I am Girl";
//         }

// };

// int main () {

//     Boy B1;

//     Girl G1;

//     B1.print();
//     B1.printBoy();

//     G1.printGirl();

//     return 0;

// }


// function overloading;
// #include<iostream>

// using namespace std;

// class Area {

//     public: 
//         void calArea(int r) {
//             cout << 3.14 * r * r;
//         }

//         void calArea(int l, int b) {
//             cout << l * b;
//         }
// };

// int main () {

//     Area A1;

//     A1.calArea(2, 4);

//     return 0;

// }