#include<iostream>
using namespace std;

class Pattern{
    public:
    void printSquare(int n,int m){
        for(int i=1;i<=n;i++){
            for(int j = 1;j<=m;j++){
                cout<<"* ";
            }
            cout<<endl;

        }
    }

    void printEmptySquare(int n,int m){
        for(int i=1;i<=n;i++){
            for(int j = 1;j<=m;j++){
                if(i==1 || j==1 || j==m ||i==n){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
            cout<<endl;
        }
    }

    void printLeftTriangle(int n,int m){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<"* ";
            }
            cout<<endl;
        }
    }

    void printInvertedLeftTriangle(int n,int m){
        for(int i=n;i>=1;i--){
            for(int j=1;j<=i;j++){
                cout<<"* ";
            }
            cout<<endl;
        }
    }

    void printRightTriangle(int n,int m){
        for(int i=1;i<=n;i++){
           for(int j=1;j<=(n-i);j++){
            cout<<"  ";
           }

           for(int j=1;j<=i;j++){
            cout<<"* ";
           }
           cout<<endl;

        }
    }

   
};

int main(){
   
    Pattern p;
    int n=4;
    int m=5;
    // p.printSquare(n,m);
    // p.printEmptySquare(n,m);

    // p.printLeftTriangle(n,m);
    // p.printInvertedLeftTriangle(n,m);
    p.printRightTriangle(n,m);
}