
#include <iostream>
using namespace std;

class Node {
    public:
    int Val;
    Node* next;
    Node(int val){
        this->Val=val;
        this->next=NULL;
    };
};

void insert_at_tail(Node* &head,int v){
    Node* newNode = new Node(v);
    Node* tem=head;

    if(head==NULL){
        head= newNode;
            cout<<"inserted at  head"<<endl<<endl;
         return;
    }
    while(tem->next != NULL){
        tem=tem->next;

    }
    tem->next = newNode;
    cout<<"inserted at tail"<<endl<<endl;
}
void insert_at_position(Node *head,int pos,int v){

    Node *newNode = new Node(v);
    Node *tem=head;
    for(int i=1;i<=pos-1;i++){
        tem=tem->next;
    }
    newNode->next=tem->next;
    tem->next=newNode;
    cout<<endl<<v<<"inserted at "<<pos<<"positon"<<endl<<endl;

}
void print_linked_list(Node* head){
    cout<<"Your linked list :"<< " ";
    Node* tem=head;
    while(tem !=NULL){
        cout<<tem->Val<<" ";
        tem=tem->next;
    }
    cout<<endl;
}
int main() {
   Node*head=NULL;
 while(true){
       cout<<"Option 1:Insert at tail"<<endl;
       cout<<"Option 2: Print all linkList"<<endl;
       cout<<"Option 3:Insert any position :"<<endl;
       cout<<"Option 4:Terminated"<<endl;
   int op;
   cin>>op;
   if(op==1){
       cout<<"please enter the value :";
      int v;
      cin>>v;
     insert_at_tail(head,v);
   }
   else if(op==2){
        print_linked_list(head);
   }
   else if(op==3){
      int v,pos;
      cout<<"Enter postion :";
      cin>>pos;
      cout<<"Enter value :";
      cin>>v;

      insert_at_position(head,pos,v);

   }else if (op==4){
       break;
   }

}

    return 0;
}
