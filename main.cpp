#include <iostream>
using namespace std;
class Queue {
    int *arr;
    int frnt;
    int rear;
    int size;

public:
    Queue() {
        size=100001;
        arr=new int[size];
        frnt=0;
        rear=0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        if(frnt==rear){
            return true;
        }else{
            return false;
        }
    }

    void enqueue(int data) {
        if(rear==size){
            cout<<"Queue is full"<<endl;
        }else{
            arr[rear]=data;
            rear++;
        }
    }

    int dequeue() {
        if(frnt==rear){
            return -1;
        }else{
            int ans=arr[frnt];
            arr[frnt]=-1;
            frnt++;
            if(frnt==rear){
                frnt=0;
                rear=0;
            }
            return ans;
        }
    }

    int front() {
        if(frnt==rear){
            return -1;
        }else{
            return arr[frnt];
        }
    }
    void printQueue(){
        for (int i = frnt; i < rear; ++i) {
            cout<<arr[i]<<endl;
        }
//        cout<<"Front "<<frnt<<endl;
//        cout<<"Rear "<<rear<<endl;
    }
};
int main() {
    Queue q;
    q.enqueue(5);
    q.enqueue(9);
    q.printQueue();
    cout<<"Front of queue is "<<q.front()<<endl;
    cout<<"====================================="<<endl;
    q.dequeue();
    q.printQueue();
    cout<<"Front of queue is "<<q.front()<<endl;
    cout<<"====================================="<<endl;
    q.dequeue();
    q.printQueue();
    cout<<"Front of queue is "<<q.front()<<endl;

    return 0;
}
