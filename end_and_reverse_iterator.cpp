#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> yash  = {10, 20, 30, 40, 50};
    vector<int>::iterator it1 = yash.begin();
    it1++;
    vector<int>::iterator it2 = yash.end();
    it2--;
    vector<int>::reverse_iterator rit = yash.rend();
    rit--;
    vector<int>::reverse_iterator rit2 = yash.rbegin();
    rit2++;
    cout << *(it1) << " ";
    cout<<endl;
    cout << *(it2) << " ";
    cout<<endl;
    cout << *(rit) << " ";
    cout<<endl;
    cout << *(rit2) << " ";
    cout<<endl;


}