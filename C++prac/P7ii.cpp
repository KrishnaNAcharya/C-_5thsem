#include<iostream>
using namespace std;

int main(){
    int a=0;
    int b=1;
    try{
        if (b == 0)
        {
            throw 0;
        }
    }
    catch (int e){
        cout << "Error :" << e << endl;
    }
    return 0;

}