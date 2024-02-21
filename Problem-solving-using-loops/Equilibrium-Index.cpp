#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    int n, k, sum1 = 0, sum2 = 0, e = -1;
    vector <int> Num;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter Number\n";
    for(int i = 0; i < n; i++){
        cin >> k;
        Num.push_back(k);
    }

    for(int i = 0; i < n-1; i++){
        sum1 += Num[i];
        cout << "Sum1: " << sum1 << endl;
        cout <<"------------\n";
        sum2 = 0;
        for(int j = i; j < n; j++){
            sum2 += Num[j];
            cout << "Sum2: " << sum2 << endl;
        }
        if(abs(sum1) == abs(sum2)){
            e = i;
            break;
        }
    }
    cout << "Equilibrium Index: "<< e << "\n";
}