int big(int a,int b){
    return (a>b)?a:b;
}
int doublesize(int a){
    return a*2;
}
class Dividezero{};
double divide(double dividenum1,double dividenum2){
    if(dividenum2==0)
        throw Dividezero();
    else 
        return dividenum1/dividenum2;
}