#include<iostream>
#include<bits/stdc++.h>
using namespace std;


//DFS Traversal in Graph
void DFS_In_Graph(int Arr[6][6],int Stating_Vetex,int size){
    int u;
    //Creating a Stack name S
    stack<int> S;
    int Visited[size]={0};//Creating a visited array and assign all the value by 0
    cout<<Stating_Vetex<<"  ";
    Visited[Stating_Vetex]=1;//Marking a starting vertex 1
    S.push(Stating_Vetex);
    while(!S.empty()){
        int flag=true;
        u=S.top();
        for(int v=1;v<size;v++){
            if(Arr[u][v]==1 && Visited[v]==0){
                flag=false;
                cout<<v<<"  ";
                Visited[v]=1;
                S.push(v);
                break;
            }
        }
        if(flag==true){
            S.pop();
        }
    }
}


//Using Recursive Call
//Recursive Call directle follow the stack data structure
// void DFS_In_Graph(int Arr[6][6],int Starting_Vertex,int size){
//     static int Visited[6]={0};
//     int j;
//     if(Visited[Starting_Vertex]==0){
//         cout<<Starting_Vertex<<"  ";
//         Visited[Starting_Vertex]=1;
//         for(j=1;j<size;j++){
//             if(Arr[Starting_Vertex][j]==1 && Visited[j]==0){
//                 DFS_In_Graph(Arr,j,size);
//             }
//         }
//     }
// }




int main()
{
    int Arr[6][6]={{0,0,0,0,0,0},
                   {0,0,1,1,0,0},
                   {0,1,0,0,0,1},
                   {0,1,0,0,1,0},
                   {0,0,0,1,0,0},
                   {0,0,1,0,0,0}};

    DFS_In_Graph(Arr,5,6);
    cout<<endl;
    return 0;
}
