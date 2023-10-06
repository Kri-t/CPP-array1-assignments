#include <iostream>
using namespace std;
int main() {
int a[6]={14, 29, 1, 22, 36, 7};
int max1 = a[0];
int max2 = a[0];

for(int i=0; i<5; i++){
if(max1<a[i]){
    max1=a[i];
}

else if(max2<a[i] && a[i]!=max1){
     max2=a[i];
}

}

cout<<max2<<endl;
return 0;
}