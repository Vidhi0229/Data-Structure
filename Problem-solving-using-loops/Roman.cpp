#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string c;
    int num = 0;
    vector<int> k;
    cout << "Enter Roman number: "; 
    cin >> c;
    for(int i = 0; i < c.length(); i++){
        switch(c[i]){
            case 'I':
                k.push_back(1); 
                break;
            case 'V':
                k.push_back(5);
                break;
            case 'X':
                k.push_back(10);
                break;
            case 'L':
                k.push_back(50);
                break;
            case 'C':
                k.push_back(100);
                break;
            case 'D':
                k.push_back(500);
                break;
            case 'M':
                k.push_back(1000);
                break;
        }      
    }

    int n = k.size();
    for(int i = 0; i < n; i++){
        if(k[i] >= k[i+1]){
            num += k[i];
        }
        else{
            num -= k[i];
        }
    }

    cout << "The number is: "<< num << endl;
    
}
