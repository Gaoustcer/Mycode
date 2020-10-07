#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string str("file.txt");
    //cin>>str;
    ifstream filestreamread("file.txt");
    //FILE* f=fopen("file.txt","r");
    while(filestreamread>>str){
        cout<<str<<"\n";
    }
    if(!filestreamread)
        cout<<"Not the file\n";
}