#include<bits/stdc++.h>
using namespace std;

int maxp(vector<int>&price){
       
    int profit=0;
    for(int i=1;i<price.size();i++){
        if (price[i]>price[i-1]){
            profit=profit+(price[i]-price[i-1]);
        }
    }
return profit;

}

int main() {
    vector<int>price={7, 1, 5, 3, 6, 4, 8, 2, 10};
    int mp=maxp(price);
    cout<<mp;
}