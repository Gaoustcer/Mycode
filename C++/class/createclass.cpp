#include<iostream>
using namespace std;
class classexample
{
private:
    int length;
    int size;
    /* data */
public:
    classexample(int a,int b):length(a),size(b){
        cout<<"This class is created\n";
    }
    ~classexample();
    void print();
    int returnlength() const {
        return length;
    }
    int returnsize() const {
        return size;
    }
    classexample(const classexample&obj){
        cout<<"This is a duplication of the class\n";
        length=obj.returnlength();
        size=obj.returnsize();
    }
};
void classexample::print(){
    cout<<length;
    cout<<"\n"<<size;
    return ;
}


classexample::~classexample()
{
    cout<<"The class is deleted";
}
int main(){
    classexample cla(12,10);
    classexample cla1(cla);
    cla.print();
    cla.~classexample();
}
