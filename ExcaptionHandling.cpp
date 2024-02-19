// Exception handling and template class example
#include<iostream>
using namespace std;
class StackOverFlow:exception{};
class StackUnderFlow:exception{};

// Template class declaration
template <class T>
class Stack
{
private:
 T *stk;   //Datatype "T"
 int top=-1;
 int size;
public:
 Stack(int sz)
 {
 size=sz;
 stk=new int[size];
 }
 void push(T x);
 
 T pop();
};

template <class T>       // Should declare here too
void Stack<T> :: push(T x)    // carefull for <T>
 {
 if(top==size-1)
 throw StackOverFlow();
 top++;
 stk[top]=x;
 }

template <class T>
T Stack<T> :: pop()
 {
 if(top==-1)
 throw StackUnderFlow();
 return stk[top--];
 }
int main()
{
 Stack<int> s(5);    // use of usertype data

 s.push(2);
 s.push(3);
 s.push(4);
 s.push(10);
 s.push(9);
 s.push(8);

}