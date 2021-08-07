#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void BFS_In_Graph(int Arr[8][8],int Starting_Vertex,int size){
    int u;
    queue<int> Q;
    int Visited[8]={0};
    cout<<Starting_Vertex<<"  ";
    Visited[Starting_Vertex]=1;
    Q.push(Starting_Vertex);
    while(!Q.empty()){
        u=Q.front();
        Q.pop();
        for(int v=1;v<size;v++){
            if(Arr[u][v]==1 && Visited[v]==0){
                cout<<v<<"  ";
                Visited[v]=1;
                Q.push(v);
            }
        }                  
    }
}


int main()
{
    int Arr[8][8]={{0,0,0,0,0,0,0,0},
                 {0,0,1,1,1,0,0,0},
                 {0,1,0,1,0,0,0,0},
                 {0,1,1,0,1,1,0,0},
                 {0,1,0,1,0,1,0,0},
                 {0,0,0,1,1,0,1,1},
                 {0,0,0,0,0,1,0,0},
                 {0,0,0,0,0,1,0,0}};


    BFS_In_Graph(Arr,4,8);
    cout<<endl;
    return 0;
}

