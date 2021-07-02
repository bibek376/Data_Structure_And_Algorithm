#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node *next;
};

node *Add_Empty(node *tail, int data){
    node *temp = new node();
    temp->data = data;
    temp->next = temp;
    tail = temp;
    return tail;
}

node *Add_From_End_Side(node *tail, int new_data){
    node *newp = new node();
    newp->data = new_data;
    newp->next = tail->next;
    tail->next = newp;
    tail = newp;
    return tail;
}

node *Control_All(node *tail){
    int n;
    cout << "Enter the number of node ?" << endl;
    cin >> n;

    if (n < 1){
        cout << "Linked List is Empty" << endl;
    }
    else{
        int data;
        cout << "Enter the Data for 1 Node" << endl;
        cin >> data;
        tail = Add_Empty(tail, data);

        for (int i = 1; i < n; i++){
            cout << "Enter the Data For " << i + 1 << " Node" << endl;
            cin >> data;
            tail = Add_From_End_Side(tail, data);
        }
    }
    return tail;
}

void Display(node *tail){
    node *p = tail->next;
    do{
        cout << p->data << "  ";
        p = p->next;
    }while (p != tail->next);
    cout << endl;
}

int main()
{
    node *tail = NULL;
    tail = Control_All(tail);
    cout << "Our Circular Linked List is" << endl;
    Display(tail);
    return 0;
}
