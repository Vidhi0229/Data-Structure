#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void swap(int *a, int *b);

int main(){
    int n;
    vector <vector<int>> Num;
    cout << "Enter size of 2D Square Matrix: ";
    cin >> n;

    cout << "Enter Number\n";
    for (int i = 0; i < n; i++) {
        vector<int> temp; 
        for (int j = 0; j < n; j++) {
            int num;
            cin >> num; 
            temp.push_back(num); 
        }
        Num.push_back(temp); 
    }

    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            /*int temp = Num[i][j];
            Num[i][j] = Num[j][i];
            Num[j][i] = temp;*/
            swap(&Num[i][j], &Num[j][i]);
        }
    }

    int k = n -1;
    for (int i = 0; i < n/2; ++i) {
        for(int j = 0; j < n; j++){
            /*int temp = Num[i][j];
            Num[i][j] = Num[k][j];
            Num[k][j] = temp;*/
            swap(&Num[i][j], &Num[k][j]);
        }
        k--;
    }

    cout << "---Rotated by 90 degree in anticlockwise---\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << Num[i][j] << " ";
        }
        cout << "\n";
    }
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}