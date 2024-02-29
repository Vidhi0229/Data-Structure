#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int one(vector <int> &Num, int key);
int end(vector <int> &Num, int key);

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

    first = one(Num, key);
    last = end(Num, key);

    cout << "First occurence: " << first << endl << "Last occurence: " << last << "\n";
}

int one(vector <int> &Num, int key){
    int beg = 0, end = Num.size() - 1, res = -1; 
    while(beg <= end){
        int mid = beg + (end - beg) / 2;
        if(Num[mid] == key){
            res = mid;
            end = mid - 1;
        }
        else if(Num[mid] < key){
            beg = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return res;
}

int end(vector <int> &Num, int key){
    int beg = 0, end = Num.size() - 1, res = -1; 
    while(beg <= end){
        int mid = beg + (end - beg) / 2;
        if(Num[mid] == key){
            res = mid;
            beg = mid + 1;
        }
        else if(Num[mid] < key){
            beg = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return res;
}