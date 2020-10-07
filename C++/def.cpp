#include<iostream>
using namespace std;
class defarea
{
private:
    static const int size_static=15;
    int array[size_static];
    const int size=12;
    enum {arraysize=12};
    int a[arraysize];
    //int array_size[size];
    //int array[size];
    int i;
    /* data */
public:
    defarea(/* args */);
    ~defarea();
};

defarea::defarea(/* args */)
{
    //size=13;
    int array[size];
    i=12;
}

defarea::~defarea()
{
    cout<<"The end of the function\n";
}
int main(){
    int n;
    cout<<n;
    int lrge[n];
    defarea area;
}