// Created  by  xiaohai
// E-mail : xiaohaijin@outlook.com

#include <iostream>

using namespace std;

template <typename I, typename O>
struct testClass
{
  testClass()
  {
    cout << "I, O" << endl;
  }
}; /// template

template <typename T>
struct testClass<T*, T*>
{
  testClass()
  {
    cout << "T*, T*" << endl;
  }
}; /// template

template <typename T>
struct testClass<const T*, T*>
{
  testClass()
  {
    cout << "const T*, T*" << endl;
  }
}; /// template

int main(int argc, char *argv[])
{
  testClass<int, char> obj1;
  testClass<int*, int*> obj2;
  testClass<const int*, int*> obj3;
  return 0;
}
