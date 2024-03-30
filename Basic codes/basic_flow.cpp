#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

void initialize(Rectangle *r, int l, int b){
    r->length = l;
    r->breadth = b;
}

int area(Rectangle r){
    return r.length * r.breadth;
}

void changeLength(Rectangle *r, int l){
    r->length = l;
}

int main()
{
    Rectangle r;
    initialize(&r, 15, 20);
    cout<<"Area: "<<area(r)<<endl;
    changeLength(&r, 30);
    cout<<"New length: "<<r.length;
    
    return 0;
}