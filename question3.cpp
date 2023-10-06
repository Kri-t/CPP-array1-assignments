#include <iostream>
using namespace std;

int main(){

int a[5] = {2,4,7,1,5};
int min = a[0];
for(int i=0; i<5; i++){
    if(min>a[i]) {
        min = a[i];
    }
}
cout << min;
return 0;
}