#include<iostream>
using namespace std;

class Area {
    public:

    int calculateArea(int r){  //circle
        return 3.14*r*r;
    }

    int calculateArea(int l, int b){  //rectangle
        return l*b;
    }
};

int main(){
    Area a;
    cout<<"Area of circle: "<<a.calculateArea(5)<<endl;
    cout<<"Area of rectangle: "<<a.calculateArea(5, 10)<<endl;
    return 0;
}