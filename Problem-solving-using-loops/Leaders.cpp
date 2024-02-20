#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    int n, k, max;
    vector <int> Num, num1;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter Number\n";
    for(int i = 0; i < n; i++){
        cin >> k;
        Num.push_back(k);
    }

    for(int i = 0; i < n; i++){
        max = *max_element(Num.begin() + i, Num.end());
        num1.push_back(max);
        
    }

    auto u = unique(num1.begin(), num1.end());
    num1.erase(u, num1.end());
    cout << "Leaders are ";
    for(auto & e : num1){
        cout << e << " ";
    }
    cout << "\n";
}

