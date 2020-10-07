#include<iostream>
#include"Month.h"
using namespace std;
class overflowmonth{};

struct Data{
    int year,month,day;
    private:
    int id;
    public:
    Data(int y,int m,int d);
    void changeid(int new_id){
        id=new_id;
        return ;
    }
    /*int changedata() const{
        day++;
    }*/
    void print();
};
Data::Data(int y,int m,int d){
    year=y;
    if(m>=12)
        throw overflowmonth();
    else 
        month=m;
    day=d;
}
class enumtest
{
    enum test{
        messi,Auf,CR7
    };
private:
    test ts;
    /* data */
public:
    enumtest(int i);
    ~enumtest();
};

enumtest::enumtest(int i)
{
    ts=test(i);
}

enumtest::~enumtest()
{
}

void Data::print(){
    cout<<year<<" "<<month<<" "<<day;
    return ;
}
int main(){
    /*Month M=Jun;
    cout<<M<<"\n";
    Data d1(12,10,14);
    try
    {
        Data d2(2,19,19);
    }
    catch(overflowmonth)
    {
        std::cerr << "month overflow" << '\n';
    }
    d1.changeid(5);
    //cout<<d1.id;
    d1.print();
    */
   //enumtest tests(1);
   //test
    
}