#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *prev;
    node *next;
};


//Adding First node of Doubly-Linked List
node *Add_Empty(node *head,int new_data){
    node *temp=new node();
    temp->data=new_data;
    temp->next=NULL;
    temp->prev=NULL;
    head=temp;
    return head;
}

//Adding node from End side of Doubly-Linked List
node *Add_From_End(node *head,int new_data){
    node *temp=new node();
    temp->data=new_data;
    temp->next=NULL;
    node *p=head;
    while(p->next !=NULL){
        p=p->next;
    }
    p->next=temp;
    temp->prev=p;
    return head;
}

node *Entire_Doubly_Linked_List(node *head){
    int n;
    cout<<"Enter the number of node ?"<<endl;
    cin>>n;
    if(n==0){
        cout<<"Linked is empty"<<endl;
    }
    else{
        int data;
        cout<<"Enter the Data for 1 node"<<endl;
        cin>>data;
        head=Add_Empty(head,data);

        for(int i=1;i<n;i++){
            cout<<"Enter the Data For "<<i+1<<" Node"<<endl;
            cin>>data;
            Add_From_End(head,data);
        }
    }
    return head;
}

void Display_Doubly_Linekd_List(node *head){
    if(head==NULL){
        cout<<"Linked List is empty"<<endl;
    }
    else{
        while(head !=NULL){
            cout<<head->data<<"  ";
            head=head->next;
        }
        cout<<endl;
    }
}

int main()
{
    node *head=NULL;
    // head=Add_Empty(head,45);
    // Add_From_End(head,9);
    // Add_From_End(head,5);
    head=Entire_Doubly_Linked_List(head);
    cout<<"Linked List is"<<endl;
    Display_Doubly_Linekd_List(head);
    return 0;
}
