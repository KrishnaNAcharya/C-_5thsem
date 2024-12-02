#include<iostream>  
using namespace std;

class vehicle{
    public:
    vehicle(){
        cout<<"This is a vehicle"<<endl;
    }
};
class car : public vehicle{
    public:
    car(){
        cout<<"This is a car"<<endl;
    }
};
class racingcar {
    public:
    racingcar(){
        cout<<"This is a racing car"<<endl;
    }
};
class Ferrari : public racingcar,public car{
    public:
    Ferrari(){
        cout<<"This is a Ferrari"<<endl;
    }
};

int main(){
    Ferrari f1;
    return 0;
}