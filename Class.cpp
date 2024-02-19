#include <iostream>
#include <string.h>
using namespace std;

class Rectangle
{
    private:           // Data hiding
    int length;
    int breadth;
    public:            // public for accessing
    Rectangle()    //Non-parameterized Constructor
    {
        length = 0;
        breadth = 0;
    }
    Rectangle(int l, int b)  //parameterized Constructor
    {
        setLength(l);
        setBreadth(b);
    }
    Rectangle( Rectangle &rect)     // Copy Constructor  (Shallow copy)
    {
        length = rect.length;
        breadth = rect.breadth;

    }
    int setLength(int l)   //setting the length   (Mutator)
    {
        if (l>=0)
        {length = l;}
        else
        {cout<<"Not valid!"<<endl;
        length = 0;}
    }
    int setBreadth(int b)  //setting the breadth
    {
        if (b>=0)
        {breadth = b;}
        else
        {cout<<"Not valid!"<<endl;
        breadth = 0;}
    }
    int getLength(int l)   // returning the length   (Accessor)
    {
        return length;
    }
    int getBreadth(int b)   // returning the breadth
    {
        return breadth;
    }
     int area()
     {
        return length*breadth;
     }
     int perimeter()
     {
        return 2*(length+breadth);

     }

};
int main(){
    Rectangle r1(10,5);       // used parameterized constructor
    // r1.setLength(10);      // accessing through variable name
    // r1.setBreadth(5);
    cout<<r1.area()<<endl;
    cout<<r1.perimeter()<<endl;
}