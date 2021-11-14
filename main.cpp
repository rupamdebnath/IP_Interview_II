#include <iostream>
using namespace std;

class Test
{
public:
int a = 10;
int *p = &a;

~Test()
{
  cout << "Destructor called" << endl;
}

};


int main() {
Test *test = new Test();
// cout << "Value of a = " << test->a << endl;
// cout << "Value of p (memory address for a) = " << test->p << endl;

Test test1;
//delete test;

} 