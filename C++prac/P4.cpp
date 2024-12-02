#include<iostream>
using namespace std;

    class Distance{
        public:
        int feet;
        int inches;

        void getdata(){
            cout<<"Enter Feet:";
            cin>>feet;
            cout<<"Enter Inches:";
            cin>>inches;
        }
        void display(){
            cout<<"Feet:"<<feet<<endl;
            cout<<"Inches:"<<inches<<endl;
        }
        void add(Distance d1,Distance d2){
            feet=d1.feet+d2.feet;
            inches=d1.inches+d2.inches;
            feet=feet+(inches/12);
            inches=inches%12;
            }
            void add(Distance *d1, Distance *d2)
            {
                feet = d1->feet + d2->feet;
                inches = d1->inches + d2->inches;
                feet = feet + (inches / 12);
                inches = inches % 12;
            }
        };
    int main(){
        Distance d1,d2,d3;
        d1.getdata();
        d2.getdata();
        d3.add(d1,d2);
        d3.display();
        d3.add(&d1, &d2);
        d3.display();
        return 0;
    }
