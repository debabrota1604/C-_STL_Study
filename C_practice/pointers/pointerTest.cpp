#include<bits/stdc++.h>
using namespace std;

void func(int *p){
    static int b=10;
    //*p=b;
    p=&b;
    cout << "Inside: " << *p << endl;
}

void func2(int **q){
    int b=10;
    *q = &b;

}


int main(){
    int a=6;
    int *p=&a, **q=&p;
    func(p);
    //func2(q);
    cout << *p << endl;
    cout << **q << endl;

    return 0;
}