#include <iostream>

using namespace std;

extern "C" unsigned function(unsigned x, unsigned y);
extern "C" void function2();
extern "C" unsigned function3();

unsigned int function_cpp(unsigned int x, unsigned int y) {
    return 1234 + x - 5*y;
}
extern "C" unsigned int function3cpp(unsigned int a, unsigned int b, unsigned int c, unsigned int d, unsigned int e);
unsigned int function3cpp(unsigned int a, unsigned int b, unsigned int c, unsigned int d, unsigned int e)
{
    cout << a << " " << b << " "<< c << " " << d << " " << e << " " << endl;
    return e;
}

int main() {

    unsigned x = 2;
    unsigned y = 14;

    cout << "1." << endl;
    cout << "\tASM: \t" << function(x,y) << endl;
    cout << "\tCPP: \t" << function_cpp(x,y) << endl;
    cout << endl;

    cout << "2." << endl;
    function2();
    cout << "\tCPP: \t" << function_cpp(1,0) << endl;
    cout << endl;

    cout << "3." << endl;
    cout << "\tASM: \t" << function3() << endl;
    cout << "\tCPP: \t" << function3cpp(1,2,3,4,5) << endl;
    cout << endl;

    return 0;
}
