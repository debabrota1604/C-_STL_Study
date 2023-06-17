#include<iostream>
using namespace std;

long long int calcFactorial(int num){
    if(num<0){
        return -1;
    }
    else if (num<2){
        return 1;
    }
    else{
        return (long long int) num*calcFactorial(num-1);
    }
    
}


int main(){
    int numb=1;
    cout<< "Factorial Computation\nEnter a positive integer: ";
    cin>>numb;
    cout<< "The factorial result is: " << calcFactorial(numb) << endl;


    return 0;

}