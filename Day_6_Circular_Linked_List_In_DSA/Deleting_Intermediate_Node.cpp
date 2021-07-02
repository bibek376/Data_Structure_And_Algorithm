#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;
};

node *Add_Empty(node *tail,int data){
    node *temp=new node();
    temp->data=data;
    temp->next=temp;
    tail=temp;
    return tail;
}

node *Add_From_End(node *tail,int data){
    node *temp=new node();
    temp->data=data;
    temp->next=tail->next;
    tail->next=temp;
    tail=temp;
    return tail;
}

//Complexity is O(n)
node *Deleting_Intermediate_Node_By_Index(node *tail,int index){
    node *p=tail->next;
    int i=0;
    while(i !=index-1){
        p=p->next;
        i++;
    }
    node *q=p->next;
    p->next=q->next;
    free(q);
    q=NULL;
    return tail;
}

void Display(node *tail){
    if(tail==NULL){
        cout<<"Linked List is Empty"<<endl;
    }
    else{
        node *p=tail->next;
        do{
            cout<<p->data<<"  ";
            p=p->next;
        }while(p!=tail->next);
        cout<<endl;
    }
}


int main()
{
    node *tail=NULL;
    tail=Add_Empty(tail,34);
    tail=Add_From_End(tail,45);
    tail=Add_From_End(tail,66);
    tail=Add_From_End(tail,6);
    Display(tail);
    cout<<"After Deleting By Index"<<endl;
    Deleting_Intermediate_Node_By_Index(tail,1);
    Display(tail);
    return 0;
}
