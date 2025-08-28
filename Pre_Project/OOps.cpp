#include <iostream>
using namespace std;
class MyClass
{
    public:
    int x;

    int meth(){
        cout<< "Iam a Method" <<"\n";
    }
};

int main(){

    MyClass obj;
    
    obj.x = 60;
    cout<<obj.x <<"\n";
    obj.meth();
    return 0;
}