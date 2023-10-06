#include<iostream>
using namespace std;

int main() {

int arr[5]={2,1,5,2,5};
bool flag = false;

for(int i=0;i<5;i++){
    for(int j=i+1;j<5;j++){
        if(arr[i]==arr[j]){
            flag = true;
            cout<<arr[i]<<endl;
            break;
        }
    }
}
if(flag==false) { 
    cout <<"No duplicate found"<<endl;
}

return 0;
}