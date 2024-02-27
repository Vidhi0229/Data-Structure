#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int fixedPoint(vector <int> &Num);

int main(){
    int n, num;
    vector <int> Num;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter Number in ascending order\n";
    for(int i = 0; i < n; i++){
        cin >> num;
        Num.push_back(num);
    }
    if(fixedPoint(Num) == -1){
        cout << "\nNo Fixed point\n";
    }
    else{
        cout << "\nFixed point: " << fixedPoint(Num) << "\n";
    }

}

int fixedPoint(vector <int> &Num){
    int beg = 0, end = Num.size() - 1;
    while(beg <= end){
        int mid = (beg + end)/2;
        if(Num[mid] == mid){
            return mid;
        }
        else if(Num[mid] < mid){
            beg = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }

    return -1;

}