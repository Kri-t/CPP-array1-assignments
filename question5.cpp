#include<iostream>
using namespace std;

int main() {
    
int a[5];
cout<<"Enter 5 elements of the array: "<<endl;
for(int i=0; i<5; i++){
    cin>>a[i];
}

int x=0;
bool flag=false;

for(int i=0; i<5; i++){
    if(a[i]!= x){
    cout<<x<<endl;
    flag=true;
    break;
}
else x++;
}

if(flag==false) 
    cout<<x<<endl;

return 0;

}