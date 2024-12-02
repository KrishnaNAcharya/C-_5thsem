#include<iostream>
#include<string>
using namespace std;

class Book{
public:
int pg;
string author;

Book(int p, string a){
    pg = p;
    author = a;
}
void display(){
    cout<<"Pages:"<<pg<<endl;
    cout<<"Author:"<<author<<endl;
}
};
int main(){
    Book b1(100,"Author1");
    b1.display();
}