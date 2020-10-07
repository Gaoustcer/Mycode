#include<iostream>
#include<vector>
using namespace std;
int square(int i);
double trans(int i){
    return (double)i;
}
int main(){
    vector<double> temps;
    cout<<"Hello world\n";
    int i;
    while(cin>>i){
        temps.push_back(trans(i));
        if(i==0)
            break;
    }
    cout<<temps[0];

}