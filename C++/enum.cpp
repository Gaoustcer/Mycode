#include<iostream>
using namespace std;
class enumexample
{
private:
    enum a{egg,bread,milk};
    enum b{egg,bread,milk,Java};

    /* data */
public:
    enumexample(/* args */);
    ~enumexample();
    void print();
};
void enumexample::print(){
    cout<<a[milk];
    cout<<b[milk];
    return ;
}


enumexample::enumexample(/* args */)
{
    cout<<"This is the start of the class\n";
}

enumexample::~enumexample()
{
    cout<<"This is the end of the class\n";
}
int main(){
    enumexample test;
    return 0;
}