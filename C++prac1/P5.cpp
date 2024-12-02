#include<iostream>
using namespace std;
template<class T>
T findmax(T a , T b){
    return (a>b)?a:b;
}
int main(){
    cout<<findmax(10,20)<<endl;
    cout << findmax(10.10, 20.20) << endl;
}