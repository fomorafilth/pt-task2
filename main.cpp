#include <iostream>

using namespace std;

class B
{
public:
    B() { cout << "Construct Base object\n"; }
    ~B() { cout << "Destruct Base object\n"; }

};

class A: public B
{
public:
    A() { cout << "Construct A object\n"; }
    ~A() { cout << "Destruct A object\n"; }
     void func() cout << "Function func() of class Child\n";}
    
};

 void Function(const B &obj)
 
 { cout << " Call method func() for obj"<< endl;
   obj.func();
   }
int main(int argc, char *argv[])
{
    cout << "* Create Object base" << endl;
    B base;
    cout << "creat Object base" << endl;
    B base;
    cout << " Create Object A" << endl;
    A child;
    
    cout << "Call method func() for object base" << endl;
    function(base);
    cout << " Call method func() for object A" << endl;
    Function(child);
    
    
    
    return 0;
}
