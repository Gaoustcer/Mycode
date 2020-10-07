#include<iostream>
using namespace std;
class private_class
{
private:
    int a;
    string test;
    int *point;
    /* data */
public:
    private_class(/* args */);
    ~private_class();
    void change_string(string new_str);
    void print_string();
    
};

private_class::private_class(/* args */)
{
    a=0;
    test="This is a Test string\n";
    point=new int[10];
}

private_class::~private_class()
{
    delete point;
    a=-1;
    cout<<test+"will be destory\n";

}
void private_class::change_string(string new_str){
    test=new_str;
    return ;
}
void private_class::print_string(){
    cout<<test;
}

int main(){
    private_class test_class;
    //test_class.test="Hello world";
    //cout<<test_class.test;
    test_class.print_string();
    test_class.change_string("hello world");
    test_class.print_string();
    return 0;
}