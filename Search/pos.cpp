#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, num, key, first = -1, last = -1;
    vector <int> Num;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter Number in ascending order\n";
    for(int i = 0; i < n; i++){
        cin >> num;
        Num.push_back(num);
    }

    cout << "Enter target number: ";
    cin >> key;
    cout << endl;
    
    for(int i = 0; i < n; i++){
        if(Num[i] == key){
            first = i;
            last = i;
            break;
        }
    }
    for(int j = n; j > first; j--){
        if(Num[j] == key){
            last = j;
            break;
        }
    }

    cout << "First occurence: " << first << endl << "Last occurence: " << last << "\n";
}