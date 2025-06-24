#include<iostream>
using namespace std;
class Student {
    public:
    //Attributes
    int id;
    string name;
    int nos;
    int age;

    //ctor:default
    Student() {
        cout<<"student default constructor called "<<endl;
    }

    //Methods /behaviour /function
    void Sleep() {
        cout<<this->name<<"Sleeping"<<endl;
    }

    void Bunk() {
        cout<<this->name<<"Bunking";
    }

    void Study() {
        cout<<this->name<<"Studying";
    }

    //dtor:default

    ~Student() {
        cout<<"Student default dtor called"<<endl;
    }
};


int main() {
   Student A;
   A.name ="Om";
   A.age=21;
   A.id=12201045;
   A.nos=6;
}