#include <iostream>
#include <vector>

using namespace std;

vector<int>list;

void recursivo_selector(vector<int> S,vector<int> F,int k){
    int m=k+1;
    while(m<=S.size() && S[m]<F[k]){
        m=m+1;
    }
    if(m<=S.size()){
        list.push_back(m);
        recursivo_selector(S,F,m);
    }
}

int main(){
    list.push_back(0);
    vector<int>A;
    vector<int>B;
    A.push_back(1);
    A.push_back(3);
    A.push_back(0);
    A.push_back(5);
    A.push_back(3);
    A.push_back(5);
    A.push_back(6);
    A.push_back(8);
    A.push_back(8);
    A.push_back(2);
    A.push_back(12);
    //////////77
    B.push_back(4);
    B.push_back(5);
    B.push_back(6);
    B.push_back(7);
    B.push_back(9);
    B.push_back(9);
    B.push_back(10);
    B.push_back(11);
    B.push_back(12);
    B.push_back(14);
    B.push_back(16);
    recursivo_selector(A,B,0);
    for(int i=0;i<list.size();i++){
       cout<<list[i]+1<<endl;
    }
    return 0;
}
