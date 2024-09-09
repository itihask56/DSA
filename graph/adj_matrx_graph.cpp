#include<iostream>
// #include<unordered_map>
// #include<list>
#include<vector>
 
using namespace std;

// class graph{


//     public:
//     unordered_map<int,list<int>>adj;

//     void addEdge(int u, int v, bool direction){
//         //direction = 0 ->undirected 
//         //direction = 1 ->directed

//         //create edge from u to v
//         adj[u].push_back(v);
//         if(direction ==0){
//             adj[v].push_back(u);
//         }




//     }

//     void printAdjList(){
//         for(auto i:adj){
//             cout<<i.first<<"->";
//             for(auto j:i.second){
//                 cout<<j<<", ";
//             }
//             cout<<endl;
//         }
//     }
// };

// int main(){
//     int n;
//     cout<<"Enter the number of nodes"<<endl;
//     cin>>n;

//     int m;
//     cout<<"Enter the number of edges"<<endl;
//     cin>>m;

//     graph g;

//     for(int i=0;i<m;i++){
//         int u,v;
//         cin>>u>>v;
//         //creating a graph
//         g.addEdge(u,v,0);

//         //pringting graph

      
//     }
//     g.printAdjList();



// }


// .................... CODER ARMU..............////////////


// Adjacency Matrix
//Directed and Unweighted graph

// int main(){
//     int vertex,edges;
//     cout<<"Enter the number of vertices and edges: ";
//     cin>>vertex>>edges;

//     vector<vector<bool>>AdjMat(vertex,vector<bool>(vertex,0));

//     int u,v;
//     for(int i =0;i<edges;i++){
//         cin>>u>>v;
//         AdjMat[u][v]=1;
//         AdjMat[v][u]=1; 
//     }

//     for(int i=0;i<vertex;i++){
//         for(int j=0;j<vertex;j++){
//             cout<<AdjMat[i][j]<<" ";
//         }
//         cout<<endl;
//     }


// }


//Undirected and weighted graph

// int main(){
//     int vertex,edges;
//     cout<<"Enter the number of vertices and edges: ";
//     cin>>vertex>>edges;

//     vector<vector<int>>AdjMat(vertex,vector<int>(vertex,0));

//     int u,v,weight;
//     for(int i =0;i<edges;i++){
//         cin>>u>>v>>weight;
//         AdjMat[u][v]=weight;
//         AdjMat[v][u]=weight; 
//     }
//     cout<<endl;
 
//     for(int i=0;i<vertex;i++){
//         for(int j=0;j<vertex;j++){
//             cout<<AdjMat[i][j]<<" ";
//         }
//         cout<<endl;
//     }
     


// }

// //Directed graph

// int main(){
//     int vertex,edges;
//     cout<<"Enter the number of vertices and edges: ";
//     cin>>vertex>>edges;

//     vector<vector<bool>>AdjMat(vertex,vector<bool>(vertex,0));

//     int u,v;
//     for(int i =0;i<edges;i++){
//         cin>>u>>v;
//         AdjMat[u][v]=1;
         
//     }
//     cout<<endl;
 
//     for(int i=0;i<vertex;i++){
//         for(int j=0;j<vertex;j++){
//             cout<<AdjMat[i][j]<<" ";
//         }
//         cout<<endl;
//     }
     


// }

//Directed and weighted graph

int main(){
    int vertex,edges;
    cout<<"Enter the number of vertices and edges: ";
    cin>>vertex>>edges;

    vector<vector<int>>AdjMat(vertex,vector<int>(vertex,0));

    int u,v,weight;
    for(int i =0;i<edges;i++){
        cin>>u>>v>>weight;
        AdjMat[u][v]=weight;
         
    }
    cout<<endl;
 
    for(int i=0;i<vertex;i++){
        for(int j=0;j<vertex;j++){
            cout<<AdjMat[i][j]<<" ";
        }
        cout<<endl;
    }
     


}