#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector <int> &Num, int key);

int main(){
    int n, num, key;
    vector <int> Num;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter Number in ascending order\n";
    for(int i = 0; i < n; i++){
        cin >> num;
        Num.push_back(num);
    }

    cout << "Enter number that you want search: ";
    cin >> key;
    int pos = binarySearch(Num, key);
    if(pos != -1){
        cout << "\nFound at index number: "<< pos << "\n";
    }
    else{
        cout << "\nNOT FOUND\n";
    }
}

int binarySearch(vector <int> &Num, int key){
    int beg = 0, end = Num.size() - 1;
    while(beg <= end){
        int mid = beg + (end - beg)/2;
        if(Num[mid] == key){
            return mid;
        }
        else if(Num[mid] < key){
            beg = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }

    return -1;

}