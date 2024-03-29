#include "class1.h" // importing the header
#include <iostream> // needed for 'std::cout' ...

//following comes the definition of the classes methods are inside definitions since they are declared in the headerfile (class1.h)
//constructor
class1::class1(int parameter1) {
  member1 = parameter1;
  member2 = parameter1;
}
class1::~class1() {
  std::cout << "Destructor has been called." << std::endl;
}

void class1::method1() {
  std::cout << "void method1()" << std::endl;
}
void class1::method2() const {
  std::cout << "void method2() const" << std::endl;
}
void class1::method3() {
  std::cout << "static void method3()" << std::endl;
}
int class1::operator+(const class1& e1)
{ // performs addition on member1
  class1 x(0);
  x.member1 = this->member1 + e1.member1;
  return x.member1;
}

//outside definition of a function
class1 operator+(const class1& e0, const class1& e1)
{ // performs addition on member2
  class1 x(0);
  x.member2 = e0.member2 + e1.member2;
}

class1 operator*(const class1& e1, const class1 e2) {
  class1 x(1);
  x.member2 = e1.member2 * e2.member2;
}