#include<bits/stdc++.h>
using namespace std;

// //undirected graph (no weight)
// int main(){
//     int vertex,edges;
//     cout<<"Enter vertex and edges: ";
//     cin>>vertex>>edges;

//     vector<int>AdjList[vertex];
//     int u,v;
//     for(int i=0;i<edges;i++){
//         cin>>u>>v;

//         AdjList[u].push_back(v);
//         AdjList[v].push_back(u);

     
//     }
//     cout<<endl
//        //print
//         for(int i=0;i<vertex;i++){
//             cout<<i<<" -> ";
//             for(int j =0;j<AdjList[i].size();j++){
//                 cout<<AdjList[i][j]<<" ";
//             }
//             cout<<endl;
//         }
// }

// //undirected weighted graph
// int main(){
//     int vertex,edges;
//     cout<<"Enter vertex and edges: ";
//     cin>>vertex>>edges;

//     vector<pair<int,int>>AdjList[vertex];
//     int u,v,weight;
//     for(int i=0;i<edges;i++){
//         cin>>u>>v>>weight;

//         AdjList[u].push_back(make_pair(v,weight));
//         AdjList[v].push_back(make_pair(u,weight));

     
//     }
//     cout<<endl;
//        //print
//         for(int i=0;i<vertex;i++){
//             cout<<i<<" -> ";
//             for(int j =0;j<AdjList[i].size();j++){
//                 cout<<AdjList[i][j].first<<" "<< AdjList[i][j].second<<" ";
//             }
//             cout<<endl;
//         }
// }


//directed (no weight)
// int main(){
//     int vertex,edges;
//     cout<<"Enter vertex and edges: ";
//     cin>>vertex>>edges;

//     // vector<int>AdjList[vertex];
//     vector<vector<int>>AdjList(vertex);
//     int u,v;
//     for(int i=0;i<edges;i++){
//         cin>>u>>v;

//         AdjList[u].push_back(v);
//         // AdjList[v].push_back();

     
//     }
//     cout<<endl;
//        //print
//         for(int i=0;i<vertex;i++){
//             cout<<i<<" -> ";
//             for(int j =0;j<AdjList[i].size();j++){
//                 cout<<AdjList[i][j]<<" ";
//             }
//             cout<<endl;
//         }
// }



// //directed weighted graph
int main(){
    int vertex,edges;
    cout<<"Enter vertex and edges: ";
    cin>>vertex>>edges;

    vector<pair<int,int>>AdjList[vertex];
    int u,v,weight;
    for(int i=0;i<edges;i++){
        cin>>u>>v>>weight;

        // AdjList[u].push_back(make_pair(v,weight));

        AdjList[u].push_back({v,weight}); //make_pair(v,weight) is equivalent to => {v,weight}
        // AdjList[v].push_back(make_pair(u,weight));
    
    }
    cout<<endl;
       //print
        for(int i=0;i<vertex;i++){
            cout<<i<<" -> ";
            for(int j =0;j<AdjList[i].size();j++){
                cout<<AdjList[i][j].first<<" "<< AdjList[i][j].second<<" ";
            }
            cout<<endl;
        }
}

