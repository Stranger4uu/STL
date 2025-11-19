#include<iostream>

using namespace std;

int main(){
    pair<int,int> p={1,3};
    cout<<p.first<<" "<<p.second;
    cout<<endl;
    pair<int, pair<int, int>> p_nested={1,{3,4}};
 
    cout<<p_nested.first<<" "<<p_nested.second.second<<" "<< p_nested.second.first;
    cout<<endl;
    pair<int, int> arr[]={{1,2},{2,5},{5,1}};
    cout<<arr[1].second;
    cout<<endl;
}