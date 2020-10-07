#include<iostream>
using namespace std;
struct Token{
    char type;
    double value;
    Token(char ch):type(ch),value(0){}
    Token(char ch,double val):type(ch),value(val){}
};
class Tokenstream
{
private:
    bool full;
    Token T;
    /* data */
public:
    Token get();
    void putbackstream(Token T);
    Tokenstream():T('\0'),full(false){}
    ~Tokenstream(){
        cout<<"destroy of the class";
    }
};

class FULL{};
void Tokenstream::putbackstream(Token Taken){
    if(full)
        throw FULL();
    else 
        T=Taken;
}
