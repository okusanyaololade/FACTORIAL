#include<iostream>
using namespace std;

//Creating my Class Factorial.
class Factorial{
    //member Data.
    int f,n;
    //Member Function.
public:
    int getFactorial(int n){
        int f = 1;
        for(int i = 1; i <= n; i++){
            f*=i;
        }
        return f;
        
    }
    
    
};
//creating my Main Class.
int main(){
    int n;
    cout<<"Input an Integer Value: ";
    cin>>n;
    Factorial calcFactorial;
   int result = calcFactorial.getFactorial(n);
    if (n <0 ){
        cout<<"Input an Integer Value."<<endl;
    }
    else{
        cout<<"Factorial of "<<n<<"! = "<<result<<endl;
    }
    return 0;                                                   
}
