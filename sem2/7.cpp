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

void ins_head(node* &head, int val){

        node* n = new node(val);

        n->next = head;
        head = n;

}

void todel(node* &head, int val){

        node* temp = head;

        if(head == NULL){
                cout << "nothing can be deducted ";
                return;
                }

        if(temp->data == val){
                head = temp->next;
                delete temp;
                return;
        }

        while(temp->next->data != val){
                temp = temp->next;
        }
        node* del = temp->next;
        temp->next = temp->next->next;

        delete del;
}

void ins_end(node* &head, int val){

        node* n = new node(val);

        if(head == NULL){
                head = n;
                return;
        }

        node* temp = head;
        while(temp->next != NULL){
                temp = temp->next;
        }
        temp->next = n;
}

node* rev(node* &head){
        if(head == NULL || head->next == NULL)
                return head;

        node* newhead = rev(head->next);
        head->next->next = head;
        head->next = NULL;

        return newhead;
}
   
 node* merge(node* &head1, node* &head2){

        node* temp = head1;

        while(temp->next!=NULL)
        {
                temp = temp->next;
        }

        temp->next = head2;
        return head1;
}


void display(node* &head){
        node* temp = head;
        while(temp != NULL){
                cout << temp->data << "->";
                temp = temp->next;
        }

}

int main()
{
        node* head1 = NULL;
        node* head2 = NULL;
        ins_end(head1, 2);
        ins_end(head1, 3);
        ins_end(head1, 4);
        ins_end(head1, 5);
        ins_end(head2, 6);
        ins_end(head2, 7);
        ins_end(head2, 8);
        ins_end(head2, 9);
        ins_end(head2, 10);
        ins_head(head1, 1);
        node* newhead1 = rev(head1);
        display(newhead1);
        node* newhead2 = merge(head1, head2);
        display(newhead2);

}


