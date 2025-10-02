#include <iostream> //103112400050
using namespace std;

int main(){
    int x; 
    cin >> x;

    for(int y=x; y>=1; y--){
        for(int a=0; a<x-y; a++) cout<<"  ";
        for(int z=y; z>=1; z--) cout<<z<<" ";
        cout<<"* ";
        for(int z=1; z<=y; z++) cout<<z<<" ";
        cout<<endl;
    }
    for(int a=0; a<x; a++) cout<<"  ";
    cout<<"*"<<endl;

    return 0;
}