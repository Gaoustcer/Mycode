#include<iostream>
#include<C:\Users\Lenovo\Desktop\Mycode\C++\Mylib.h>
using namespace std;
#define MAXSIZE 100
class Error
{
    int Errortype;
private:
    /* data */
public:
    Error(/* args */){
        Errortype=1;
    }
};
class overflow{};
int area(int width,int length){
    int area=width*length;
    if(width<0||length<0)
        throw Error();
    else 
        return area;
}
class sorted_array
{
private:
    /* data */
public:
    int a[MAXSIZE];
    int size;
    sorted_array(int *ori,int num)
    {
        int i;
        if(num>MAXSIZE) throw overflow();
        for(i=0;i<num;i++)
            a[i]=ori[i];
        size=num;
    }
    sorted_array()
    {
        int i;
        for(i=0;i<MAXSIZE;i++)
            a[i]=0;
        size=0;
    }
    void add_together(sorted_array a,sorted_array b);
    int print_array(){
        for(int i=0;i<size;i++)
            cout<<a[i]<<" ";
        return size;
    }
    ~sorted_array();
};

void sorted_array::add_together(sorted_array sort1,sorted_array sort2)
{
    int i=0;
    int j=0;
    int k=0;
    while (1)
    {
        if(i==sort1.size||j==sort2.size)
            break;
        if(sort1.a[i]<sort2.a[j])
        {
            a[k]=sort1.a[i];
            k++;
            i++;
        }
        else
        {
            a[k]=sort2.a[j];
            k++;
            j++;
        }
        
        /* code */
    }
    if(i==sort1.size)
    {
        for(;j<sort2.size;j++)
        {
            a[k]=sort2.a[j];
            k++;
        }
    }
    else{
        for(;i<sort1.size;i++)
        {
            a[k+1]=sort1.a[i];
            k++;
        }
    }
    size=sort1.size+sort2.size;
    return ;
    
}

sorted_array::~sorted_array()
{
    //cout<<"This is the destory of the class sorted_array\n";
}


int main(){
    int width,length;
    //cin>>width>>length;
    /*try
    {
        int areasize=area(width,length);
    }
    catch(Error)
    {
        cerr<<"Invalid Input\n";
    }
    cout<<big(width,length);
    cout<<"Hello world";
    */
    int a[10]={1,4,7,19,24,39,40,77,68,94};
    int b[10]={5,7,9,10,11,45,49,56,88,172};
    sorted_array s1(a,10);
    sorted_array s2(b,10);
    sorted_array result;
    result.add_together(s1,s2);
    result.print_array();
}