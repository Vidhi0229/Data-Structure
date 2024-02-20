#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    int n, k, count = 1;
    vector <int> Num;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter Number\n";
    for(int i = 0; i < n; i++){
        cin >> k;
        Num.push_back(k);
    }
    sort(Num.begin(), Num.end());
    int max = *max_element(Num.begin(), Num.end());
    int num1 = max - 1;
    for(int i = n; i >= 0; i--){
        if(Num[i] == num1){
            count++;
            num1 -= 1;    
        }
    }
    cout << "\nNumber of Buildings facing sun: " << count << endl;
}