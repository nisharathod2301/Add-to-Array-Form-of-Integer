// Online C++ compiler to run C++ program online
#include <iostream>
#include<sstream>
#include<array>
#include<vector>
using namespace std;
int main() {
    // Write C++ code here
    int k = 5;
    array<int,4>arr={9,9,9,8};
    cout<<arr.size();
    stringstream ss;
    for(int i=0;i<4;i++){
        ss<<arr[i];
    }
    int result;
    ss >> result;
    cout << result << endl;
    result = result + k;
    int temp = result;
    // cout<<temp;
    int count = 0;
    while(temp!=0){
        temp = temp/10;
        count++;
    }
    cout<<count<<endl;
    vector<int>nes;
    nes.insert(nes.begin(),count,0);
    
    for(int j = 0; j<count; j++){
        nes[j]=0;
    }
    for(int i=count-1; i>=0; --i){
        nes[i] = result%10;
        result = result/10;
    }
    for(int i=0; i<count; i++){
        cout<<nes[i];
    }
    return 0;
}
