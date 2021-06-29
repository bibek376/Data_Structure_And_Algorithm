#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *prev;
    node *next;
};

node *Add_Empty(node *head,int new_data){
    node *temp=new node();
    temp->data=new_data;
    temp->next=NULL;
    temp->prev=NULL;
    head=temp;
    return head;
}

node *Add_From_End_Side(node *head,int new_data){
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

node *Creating_Doubly_Linked_List(node *head){
    int n;
    cout<<"Enter the number of node ?"<<endl;
    cin>>n;
    if(n<=0){
        cout<<"Linked List is Empty"<<endl;
    }
    else{
        int data;
        cout<<"Enter the data for 1 Node"<<endl;
        cin>>data;
        head=Add_Empty(head,data);

        for(int i=1;i<n;i++){
            cout<<"Enter the data for "<<i+1<<" Node"<<endl;
            cin>>data;
            Add_From_End_Side(head,data);
        }
    }
    return head;
}

//Methode 1
// node *Deleting_A_First_Node(node *head){
//     node *ptr=head;
//     head=head->next;
//     head->prev=NULL;
//     free(ptr);
//     return head;
// }

//Method 2
node *Deleting_A_First_Node(node *head){
    head=head->next;
    free(head->prev);
    head->prev=NULL;
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
    // Add_From_End_Side(head,6);
    //  Add_From_End_Side(head,9);
    head=Creating_Doubly_Linked_List(head);
    Display_Doubly_Linekd_List(head);
    cout<<"After Deleting a First Node"<<endl;
    head=Deleting_A_First_Node(head);
    Display_Doubly_Linekd_List(head);
    return 0;
}
