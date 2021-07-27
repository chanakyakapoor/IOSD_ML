#include<bits/stdc++.h>
using namespace std;

class node{
        public:
                node* next;
                int data;
                node(int val){

                        data = val;
                        next = NULL;
                }
};

class queue{

        node* front;
        node* back;

        public:

        queue(){
                front = NULL;
                back = NULL;
        }

        void push(int x){

                node* n = new node(x);

                if(front == NULL){
                        front = n;
                        back = n;
                        return;
                }

                back->next = n;
                back = n;

        }

        void pop(){

                if(front == NULL){
                        cout << "cannot";
                        return;
                }

                node* del = front;
                front = front->next;
                delete del;
        }

        void display(){

                cout << front->data;
        }
}q;

int main(){

        q.push(1);
        q.push(2);
        q.push(3);
        q.push(4);
        q.pop();
        q.pop();
        q.display();

}
