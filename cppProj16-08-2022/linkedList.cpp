#include<iostream>
#include "listNode.cpp"
using namespace std;


class linkedList{
    listNode *head;
    int size;

    public:
    linkedList(){
        head = nullptr;
        size = 0;
    }

    linkedList(int initNodeData){
        head = new listNode(initNodeData);
        size=1;
    }

    void disp(){
        if (size>0){
            auto bkp = head;
            while(bkp){
                cout  << bkp->getData() << " -> ";
                bkp = bkp->getNextPtr();

            }
            cout <<  "NULL" << endl; //print the node with nullptr
        }
        else cout << "List is empty!" << endl;
    }

    listNode* insertAtBeg(int nodeData){
        head = new listNode(nodeData,head);   
        size++;
        return head;
    }

    listNode* insertAtEnd (int nodeData){
        auto endFinder = head;
        while(!endFinder->isNextNull()){
            endFinder = endFinder->getNextPtr();
        }
        endFinder->setNextptr(new listNode(nodeData, nullptr));
        size++;
        return head;
    }

    listNode* insertAtPos (int nodeData, int pos){
        
        if (pos == 1) return insertAtBeg(nodeData);
        if (pos == size+1) return insertAtEnd(nodeData);

        auto iter = head; int posCount=1;
        while (iter!=nullptr && posCount !=pos-1){
            iter = iter->getNextPtr(); posCount++;
        }
        if (iter == nullptr){
            cout << "List doesn't contain " << pos << " elements to insert a node after that!" << endl;
            disp();
            return nullptr;
        }
        auto tempPtr = iter->getNextPtr();
        iter->setNextptr(new listNode(nodeData,tempPtr));

        return head;
    }

    
};