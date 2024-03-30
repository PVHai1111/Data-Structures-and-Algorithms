#include <iostream>

using namespace std;

template<class T>
class Arithmetic{
private:
    T a;
    T b;
public:
    Arithmetic();
    Arithmetic(T a, T b);
    T add();
    T sub();
};

    template<class T>
    Arithmetic<T>::Arithmetic(){
        this->a=0;
        this->b=0;
    }

    template<class T>
    Arithmetic<T>::Arithmetic(T a, T b){
        this->a=a;
        this->b=b;
    }

    template<class T>
    T Arithmetic<T>::add(){
        return a+b;
    }

    template<class T>
    T Arithmetic<T>::sub(){
        return a-b;
    }


int main(){
    Arithmetic<int> ar(10,5);
    Arithmetic<float> ar2(1.5, 2.7);
    cout<<"Add: "<<ar.add()<<endl<<"Substract: "<<ar.sub()<<endl;
    cout<<"Add: "<<ar2.add()<<endl<<"Substract: "<<ar2.sub()<<endl;

    return 0;
}