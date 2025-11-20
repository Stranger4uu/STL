#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> yash;
    yash.push_back(1);
    yash.emplace_back(5);

    vector<pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(1,2);

    vector<int> v1(5,500);

    vector<int> v2 = {10, 20, 30, 40, 50};
    vector<int> v3(5,10);

    vector<int> v4(v3);

    vector<int>::iterator it = v2.begin();
    it++;

    cout << *(it) << " ";
    cout<<endl;

    return 0;
}
