#include <iostream>
#include <string>
using namespace std;

class Employee{
    public:
    string name;
    int no;
    double basic;
    double da;
    double it;
    double net;
    double gross;
    void getdata(){
        cout<<"Enter Name:";
        cin>>name;
        cout<<"Enter No:";
        cin>>no;
        cout<<"Enter Basic:";
        cin>>basic;
        cout<<"Enter DA:";
        cin>>da;
        cout<<"Enter IT:";
        cin>>it;
    }
    void calculate(){
        gross=basic+da;
        net=gross-it;
    }
    void display(){
        cout<<"Name:"<<name<<endl;
        cout<<"No:"<<no<<endl;
        cout<<"Basic:"<<basic<<endl;
        cout<<"DA:"<<da<<endl;
        cout<<"IT:"<<it<<endl;
        cout<<"Gross:"<<gross<<endl;
        cout<<"Net:"<<net<<endl;
    }
};
int main(){
    Employee e1;
    e1.getdata();
    e1.calculate();
    e1.display();
    return 0;
}