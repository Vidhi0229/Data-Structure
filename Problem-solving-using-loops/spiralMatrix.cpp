#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    int n, m;
    vector <vector<int>> Num;
    cout << "Enter no. of rows: ";
    cin >> n;

    cout << "Enter no. of columns: ";
    cin >> m;

    cout << "Enter Number\n";
    for (int i = 0; i < n; i++) {
        vector<int> temp; 
        for (int j = 0; j < m; j++) {
            int num;
            cin >> num; 
            temp.push_back(num); 
        }
        Num.push_back(temp); 
    }

}