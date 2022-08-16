#include<iostream>
#include "linkedList.cpp"
using namespace std;


int main(){
    linkedList l(5);
    l.disp();

    l.insertAtBeg(10);
    l.disp();

    l.insertAtEnd(11);
    l.disp();


    l.insertAtPos(19,3);
    l.disp();

    l.deleteByPos(1);
    l.disp();

    l.deleteByPos(l.getSize());
    l.disp();









    return 0;
}