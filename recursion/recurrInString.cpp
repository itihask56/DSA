#include<iostream>
using namespace std;

//1st approach
// void reverseString(string str,int index){
//     if(index==-1){
//         return;
//     }
//     cout<<str[index];
//     reverseString(str,index-1);
    
// }

// int main(){
//     string str="itihas";
//     int index=5;

//     reverseString(str,index);
// }



//2nd approach

// void reverseString(string &str,int start,int end){
//     if(start>=end){
//         return;
//     }
//     char c=str[start];
//     str[start]=str[end];
//     str[end]=c;

//     reverseString(str,start+1,end-1);
// }

// int main(){
//     string str="Itihas";
//     reverseString(str,0,5);
//     cout<<str;
// }

//lower to upper case

void lowerToUpper(string &str1,int index){
    if(index==-1){
        return ;
    }

    str1[index]='A'+ str1[index]-'a';
    lowerToUpper(str1,index-1);
}


//upper to lower
void upperToLower(string &str2,int index){
    if(index==-1){
        return;
    }
    str2[index]='a'+str2[index]-'A';
    upperToLower(str2,index-1);
}
int main(){
    string str1="itihas";
    lowerToUpper(str1,5);
    cout<<"LowerToUpper: "<<str1;
    cout<<endl;

    string str2="ITIHAS";
    upperToLower(str2,5);
    cout<<"Upper to Lower: "<<str2;
}