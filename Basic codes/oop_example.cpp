#include <iostream>

using namespace std;

class Rectangle {
private:
    int length;
    int breadth;
public:
    Rectangle(){
        length = 0;
        breadth=0;
    }
    Rectangle(int l, int b){
        length = l;
        breadth = b;
    }

    int area(){
        return length * breadth;
    }

    int perimeter(){
        return 2*(length+breadth);
    }

    int getLength(){
        return length;
    }

    void setLength(int l){
        length = l;
    }

    int getBreadth(){
        return breadth;
    }

    void setBreadth(int b){
        breadth = b;
    }

    ~Rectangle(){
        cout<<"Destructor";
    }
};

int main() {
    Rectangle r;
    int l=0,b=0;
    cout<<"Enter length and breadth: ";
    cin>>l>>b;
    r.setLength(l);
    r.setBreadth(b);
    cout<<"Area: "<<r.area()<<endl;
    cout<<"Perimeter: "<<r.perimeter()<<endl;

    return 0;
}