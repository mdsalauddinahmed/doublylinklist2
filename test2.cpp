#include <iostream>
using namespace std;

class Node{
public:
    int val;
    Node*next;
    Node(int val){
      this->val=val;
      this->next=NULL;

}
};

void print_all(Node *head){

Node *tem=head;
while(tem !=NULL){

    cout<<tem->val<< " ";
    tem=tem->next;

}
cout<<endl;


}

int main(){
 Node *head=new Node(10);
 Node *a=new Node(20);
 Node *b=new Node(30);
 Node *c=new Node(40);
 head->next=a;
 a->next=b;
 b->next=c;


print_all(head);

}
