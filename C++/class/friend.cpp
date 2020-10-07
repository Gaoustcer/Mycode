#include<iostream>
#include<string>
using namespace std;
class testclass
{
public:
    int size;
    string teachername;
private:
    int TAnum;
    /* data */
public:
    testclass(string str,int sizeclass):teachername(str),size(sizeclass){
        cout<<"This is the construction\n";
    }
    ~testclass(){
        cout<<"This is the free process\n";
    }
};

int main(){
    
}
