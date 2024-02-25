#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    int n, k;
    vector <int> Num;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter Number\n";
    for(int i = 0; i < n; i++){
        cin >> k;
        Num.push_back(k);
    }

    int max = *max_element(Num.begin(), Num.end());
    int min = *min_element(Num.begin(), Num.end());
    cout << "Max element: " << max << "\n";
    cout << "Min element: " << min << "\n";
}