#include <iostream>
#include<oop.h>

using namespace std;
int main(int argc, char *argv[])
{
    cout << "* Create Object base" << endl;
    B base;
    cout << "creat Object base" << endl;
    B base;
    cout << " Create Object A" << endl;
    A child;
    
    cout << "Call method func() for object base" << endl;
    Function(base);
    cout << " Call method func() for object A" << endl;
    Function(child);    
    return 0;
}
