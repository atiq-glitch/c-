#include <iostream>
using namespace std;

template <class T>
class Calculator
{
public:
    T add(T a, T b)
    {
        return a + b;
    }
};

int main()
{
    Calculator<int> obj;
    cout << obj.add(10, 15)<<endl;
    Calculator<float> obj1;
    cout<< obj1.add(10.1,10.3);

    return 0;
}