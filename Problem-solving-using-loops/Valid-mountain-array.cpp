#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, k, count = 0;
    vector<int> Num;
    
    cout << "Enter size of array: ";
    cin >> n;
    
    cout << "Enter numbers: ";
    for(int i = 0; i < n; i++) {
        cin >> k;
        Num.push_back(k);
    }

    auto max_it = max_element(Num.begin(), Num.end());

    if (max_it == Num.begin() || max_it == Num.end() - 1) {
        count++;
    }

    int l = distance(Num.begin(), max_it);

    for (int i = 0; i < l; i++) {
        if (Num[i] >= Num[i + 1]) {
            count++; 
        }
    }

    for (int i = l; i < n - 1; i++) {
        if (Num[i] <= Num[i + 1]) {
            count++; 
        }
    }

    if(count != 0){
        cout <<"No\n";
    }
    else{
        cout << "Yes\n";
    }
}
