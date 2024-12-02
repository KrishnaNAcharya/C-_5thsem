#include<iostream>
using namespace std;

class Number{
    public:
    int value;
    Number(int v=0):value(v) {}
    Number operator - (){
        return Number(-value);
    }
    void display(){
        cout<<"Value:"<<value<<endl;
    }
};
int main(){
    Number n1(10);
    cout<<"Before Unary:"<<endl;
    n1.display();
    cout<<"After Unary:"<<endl;
    Number n2=-n1;
    n2.display();
    return 0;
}