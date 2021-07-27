#include<bits/stdc++.h>
using namespace std;
#define n 20
class _queue{
        int* arr;
        int front;
    int back;

        public:

        _queue(){
                arr = new int[n];
                front = -1;
        back = -1;
        }

        void push(int x){
                if(back == n-1){
                        cout << "overflow";
                        return;
                }

        back++;
        arr[back] = x;

                if(front == -1){
            front++;
        }
        }

        void pop(){
                if(back == -1 || front > back){
                        cout << "cannot";
                        return;
                }

                front++;
        }

        void display(){
                if(back == -1 || front > back){
                        cout << "cannot";
                        return;
                }

                cout << arr[front]<<endl;
        }

};

int main(){
    _queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.pop();
    q.pop();
    q.display();

}
