#include<iostream>
using namespace std;

int factorial(int n){

    if(n>1){
        return n * factorial(n-1);
    }
    else
    return 1;
}

int main(){
    int n;

    cout<<"Enter a Positive integer : ";
    cin>>n;

    cout<<"Factorial of " << n << " = " << factorial(n);
    cout<< endl;
    system("pause");
}
