#include <iostream>
#include <vector>

using namespace std;

vector<int>greedy_selector(vector<int>S,vector<int>F){
    int n=S.size();
    int k=1;
    int m;
    vector<int>list;
    list.push_back(0);
    ///////
    for(m=2;m<=n;m++){
        if(S[m]>=F[k]){
            list.push_back(m);
            k=m;
        }
    }
    return list;
}

int main(){
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
    vector<int>res=greedy_selector(A,B);
    for(int i=0;i<res.size();i++){
        cout<<res[i]+1<<endl;
    }
    return 0;
}
