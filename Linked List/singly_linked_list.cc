#include<iostream>

struct node{                                                // Structure of the Node.
    int data;
    node *next;
};

node* insert_at_begin(node *head,int val){                  // Add node at the beginning.

    node *temp=new node;
    temp->data=val;
    temp->next=head;
    head=temp;

    return head;
}

node* insert_at_end(node *head,int val){                    // Add node at the End.

    node *ptr=head;
    node *temp=new node;
    temp->data=val;
    if(head==NULL){
    temp->next=head;
    head=temp;
    }
    else{
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=temp;
        temp->next=NULL;
    }

    return head;
}

node* add_node_atIndex(node *head,int val,int index){       // Add node at a particular index.

    int i=1;
    node *ptr=head;
    node *temp=new node;
    temp->data=val;
    if(index==0){
    temp->next=head;
    head=temp;
    }
    else{
        while(i<index){
            i++;
            ptr=ptr->next;
        }
        temp->next=ptr->next;
        ptr->next=temp;
    }

    return head;
}

void search(node *head,int data){           // Search for data in the Linked List

    int flag=0,i=0;
    node *temp=head;
    
    while(temp!=NULL){
        if(temp->data==data){
            std::cout<<"Element found at index "<<i<<"\n";
            flag=1;
            break;
        }
        else{
        temp=temp->next;
        i++;
        }
    }

    if(flag==0) std::cout<<"Element not found\n";

    return ;
}

void display(node *temp){                   // Display the Linked List

    while(temp!=NULL){
        std::cout<<temp->data<<" ";
        temp=temp->next;
    }

    return ;
}

int main(){

    node *head=NULL;                            // Initialize head with null.
    head = insert_at_begin(head,30);

    display(head);
    std::cout<<"\n";

    head = insert_at_begin(head,20);
    head = insert_at_begin(head,10);

    display(head);
    std::cout<<"\n";

    head = insert_at_end(head,50);
    head = insert_at_end(head,60);

    display(head);
    std::cout<<"\n";

    head = add_node_atIndex(head,70,3);

    display(head);
    std::cout<<"\n";

    search(head,60);
    search(head,40);

    return 0;
}