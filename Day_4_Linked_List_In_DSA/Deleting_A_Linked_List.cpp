#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;
};

// Complexity is O(1)
node *Deleting_A_First_Node(node *head){
    node *ptr=head;
    head=head->next;
    free(ptr);
    return head;
}

// Complexity is O(n)
node *Deleting_A_Last_Node(node *head){
    node *p=head;
    node *q=head;
    while(p->next !=NULL){
        q=p;
        p=p->next;
    }
    q->next=NULL;
    free(p);
    return head;

}

// Complexity is O(n)
node *Deleting_In_Between_With_Index(node *head,int index){
    node *p=head;
    int i=0;
    while(i !=index-1){
        p=p->next;
    }
    node *q=p->next;
    p->next=q->next;
    free(q);
    return head;
}

// Complexity is O(n)
node *Deleting_A_Node_With_Value(node *head,int value){
    node *p=head;
    node *q=head;
    while(p->data !=value && p->next !=NULL){
        q=p;
        p=p->next;
    }
    if(p->data==value){
        q->next=p->next;
        free(p);
    }
    else{
        cout<<"Value not found"<<endl;
    }
    return head;
}

void Display(node *head){
    if(head==NULL){
        cout<<"Linked List is empty"<<endl;
    }
    else{
        while(head !=NULL){
            cout<<head->data<<" ";
            head=head->next;
        }
        cout<<endl;
    }
}

int main()
{
    //Allocate memory Dynamically From heap
    node *head=new node();
    node *second=new node();
    node *third=new node();

    head->data=45;
    head->next=second;

    second->data=98;
    second->next=third;

    third->data=3;
    third->next=NULL;

    Display(head);
    cout<<"Press 1 For Deleting a First node"<<endl;
    cout<<"Press 2 For Deleting a Last node"<<endl;
    cout<<"Press 3 For Deleting a node With index"<<endl;
    cout<<"Press 4 For Deleting a node By Value"<<endl;
    cout<<"Press 5 For Exit"<<endl;
    int num;
    cout<<"Make Your Choice ?"<<endl;
    cin>>num;
    switch (num){
        case 1:
        head=Deleting_A_First_Node(head);
        break;

        case 2:
        Deleting_A_Last_Node(head);
        break;

        case 3:
        Deleting_In_Between_With_Index(head,1);
        break;

        case 4:
        Deleting_A_Node_With_Value(head,98);
        break;

        case 5:
        cout<<"Thank You !"<<endl;

    }
    cout<<"After Deleting a node:"<<endl;
    Display(head);
    return 0;
}
