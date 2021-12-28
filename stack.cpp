#include<bits/stdc++.h>
using namespace std;

class stackusingarray{
    private:
    int *data;
    int nextIndex;
    int capacity;

    public:
    stackusingarray(int totalsize){
        data=new int[totalsize];
        nextIndex=0;
        capacity=totalsize;
    }
    // size of stack
    int size(){
        return nextIndex;
    }
    // checking whether stack is empty
    bool isEmpty(){
        return nextIndex==0;
    }
    // pushing elements
    void push(int element){
        if(nextIndex == capacity){
            cout<<"Stack is Full"<<endl;
            return;
        }
        data[nextIndex]=element;
        nextIndex++;
    }
    // Deleting Elements
    int pop(){
        if(isEmpty()){
            cout<<"Stack is Empty"<<endl;
            return 0;
        }
        nextIndex--;
        return data[nextIndex];
    }
    // Top element of the Stack
    int top(){
        if(isEmpty()){
            cout<<"Stack is Empty"<<endl;
            return 0;
        }
        return data[nextIndex-1];
    }
};
