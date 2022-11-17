#include <iostream>
using namespace std;
class classB;
class classA{
private:
    int a;
public:
    void set(){
        cout << "Enter value of a: ";
        cin >> a;
    }
    void display(){
        cout << "Value of a is " << a << endl;
    }
    friend int add(classA, classB);
    friend void swap(classA&, classB&);
};
class classB{
private:
    int b;
public:
    void set(){
        cout << "Enter value of b: ";
        cin >> b;
    }
    void display(){
        cout << "Value of b is " << b << endl;
    }
    friend int add(classA, classB);
    friend void swap(classA&, classB&);
};
int add(classA x, classB y){
    return  x.a + y.b;
}
void swap(classA& x, classB& y){
    int t = y.b;
    y.b = x.a;
    x.a = t;
}
int main(){
    classA x;
    classB y;
    x.set();
    y.set();
    cout << "Addition of data member of differnet class is " << add(x, y) << endl;
    cout << "Before swapping:\n";
    x.display();
    y.display();
    swap(x,y);
    cout << "After swapping:\n";
    x.display();
    y.display();
     cout<<"This is program is developed by Vinay Kumar Scholar No .21U03025";
}
