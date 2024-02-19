#include <iostream>
using namespace std;

class Rectangle
{
    private:
    int length;
    int breadth;
    public:
    Rectangle (int l=0, int b=0)
    {
        setLength(l);
        setBreadth(b);
    }
    int setLength(int l)
    {
        if(l<0)
        {
            cout<<"Not Valid!"<<endl;
        }
        else{
            length = l;
        }
    }
    int setBreadth(int b)
    {
        if(b<0)
        {
            cout<<"Not Valid!"<<endl;
        }
        else{
            breadth = b;
        }
    }
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    int Area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
};
class Cuboid: public Rectangle
{
    private: 
    int height;
    public:
    Cuboid(int l=0, int b=0, int h=0)
    {
        height = h;
        setLength(l);
        setBreadth(b);
    }
    int setHeight(int h)
    {
        if(h<0)
        {
            cout<<"Not Valid!"<<endl;
        }
        else{
            height = h;
        }
    }

    int getHeight(int h)
    {
        return height;
    }

    int Volume()
    {
        return getLength()*getBreadth()*height;
    }


};

int main()
{
    Cuboid C(10, 5, 4);
    cout<<C.Volume();

    
}