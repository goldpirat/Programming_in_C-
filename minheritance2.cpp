/*
CH-230-A
a13 p5.cpp
Flori Kusari
fkusari@jacobs-university.de
*/

#include <iostream>
using namespace std;
 
class A
{
	int x;
public:
	A(int i) { x = i; }
	void print() { cout << x; }
};
 
class B: virtual public A
{
public:
	B():A(10) {  }
};
 
class C:  virtual public A 
{
public:
	C():A(10) {  }
};
 
class D: public B, public C 
{
public:
	D() : A(10), B(), C() {  } // add constructor{ 
};
 
int main()
{
    D d;
    d.print();
    return 0;
}

// Compilation Error Explanation:
// Error: use of deleted function 'D::D()'
// Error: no matching function for call to 'A::A()'
/* 
no matching empty constructor for D, therefore
we create a constructor for D which will inherit A
*/