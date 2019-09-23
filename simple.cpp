#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;

int sockMerchant(int n, vector<int> ar) {
    int temp=n;
    int cnt =0;
    int result =0;
    sort(ar.begin(),ar.end());
    cout<<endl;
    for(auto i=0; i<n;) {
        int j = ar[i];
        while(ar[i] == j) {
            cnt++;
            ++i;
        }
        result += cnt/2;
        cnt=0;
    }
    return result;
}

int main() {
    vector<int> v;
    int num;
    cout<<"enter number of socks"<<endl;
    cin>>num;
    // Use current time as seed for random generator
    srand(time(0));
    for (auto i=0; i<num; i++) {
        v.push_back(rand()%4);
        cout<<v[i]<<" ";
    }
    cout<<endl;
    auto pairs = sockMerchant(num,v);
    cout<<"result is:"<<pairs<<endl;
}
