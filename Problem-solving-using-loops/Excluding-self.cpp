#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    int n, k, p = 1;
    vector <int> Num;
    vector <int> Product;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter Number\n";
    for(int i = 0; i < n; i++){
        cin >> k;
        Num.push_back(k);
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i != j){
                p *= Num[j];
            }
        }
        Product.push_back(p);
        p = 1;
    }

    for(auto & i : Product){
        cout << i << " ";
    }
    cout << "\n";
}