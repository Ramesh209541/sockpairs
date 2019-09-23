#include <iostream>
#include <vector>
#include <map>
#include <cstdlib>
using namespace std;

int sockMerchant(int n, vector<int> ar) {
    map<int,bool> m;
    int result =0;
    for (auto i: ar) {
        if (m[i] == true) {
            result++;
            m[i]=false;
        }
        else {
            m[i]=true;
        }
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
